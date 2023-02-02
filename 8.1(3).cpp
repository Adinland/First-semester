#include <iostream>
#include <vector>

using namespace std;

class Item {
protected:
    string name, type;
    Item(string n, string t) { name = n; type = t; }
public:
    Item() { name = "null"; }
    virtual ~Item() {}
    virtual string GetName() { return name; }
    virtual string GetType() { return type; }
    virtual int GetDamage() { return 0; }
    virtual string IsFull() { return "0"; }
};

class Weapon : public Item {
protected:
    int damage;
public:
    Weapon(string n, string t, int d) : Item(n, t) { damage = d; }
    ~Weapon() {}
    string GetName() { return name; }
    int GetDamage() { return damage; }

};

class Bottle : public Item {
protected:
    bool full;
public:
    Bottle() {}
    Bottle(string n, string t, bool f) : Item(n, t) { full = f; }
    ~Bottle() {}
    string IsFull() {
        if (full == true)
            return "Bottle is full";
        else
            return "Bottle is empty";
    }
};

struct Inventory {
private:
    vector <Item*> vbag;
public:
    Inventory() {}
    ~Inventory() {}
    void AddItem(Item& itm) {
        vbag.push_back(&itm);
    }

    void DeleteItem(string name) {
        int j = 0;
        for (auto i = vbag.begin(); i != vbag.end(); i++, j++) {
            if (vbag.at(j)->GetName() == name) {
                vbag.erase(i);
                return;
            }
        }
    }

    void ShowBag() {
        cout << "\tInvenorty:\n";
        for (int i = 0; i < vbag.size(); i++) {
            cout << i + 1 << endl;
            cout << "Name - " << vbag[i]->GetName() << endl;
            cout << "Type - " << vbag[i]->GetType() << endl;
            if (vbag[i]->GetType() == "weapon") 
                cout << "Damage - " << vbag[i]->GetDamage() << endl;
            if (vbag[i]->GetType() == "bottle")
                cout << vbag[i]->GetName() << " - " << vbag[i]->IsFull() << endl;
        }
    }
    int Size() {
        return (int)vbag.size();
    }
    Item GetItem(string name) {
        for (int i = 0; i < vbag.size(); i++)
            if (vbag[i]->GetName() == name) {
                return *vbag[i];
            }
    }
};

class Hero {
protected:
    Inventory bag;
    Item* main_hand;
public:
    Hero() {}
    ~Hero() {  }
    void AddToBag(Item& itm) {
        bag.AddItem(itm);
    }
    void DellFromBag(Item itm) {
        bag.DeleteItem(itm.GetName());
    }
    void ShowBag() {
        bag.ShowBag();
    }
    void EquipWeapon(Item& itm) {
                main_hand = &itm;
                bag.DeleteItem(itm.GetName());
    }
    void ShowWeapon() {
        cout << "\tWeapon:\n";
        cout << "Name - " << main_hand->GetName() << endl;
        cout << "Damage - " << main_hand->GetDamage() << endl;
    }
};

int main()
{
    
    Hero player;
    Bottle beer("Klinskoe", "bottle", true);
    Weapon axe("Steel axe", "weapon", 100), sword("Hellfire sword", "weapon", 500);
    player.AddToBag(sword);
    player.AddToBag(axe);
    player.AddToBag(beer);
    player.ShowBag();
    player.DellFromBag(axe);
    player.ShowBag();
    player.EquipWeapon(sword);
    player.ShowWeapon();
    player.ShowBag();
    /*
    bag.AddItem(sword);
    bag.AddItem(axe);
    bag.AddItem(beer);

    bag.ShowBag();
    bag.DeleteItem(axe.GetName());
    bag.ShowBag();
    */
    return 0;
}