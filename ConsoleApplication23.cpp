#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name, gender;
    int age;
    float weight;
public:
    Person() {
        age = 2;
        weight = 2;
    }

    Person(string name, string gender, int age, int weight) {
        this->name = name;
        this->gender = gender;
        this->age = age;
        this->weight = weight;
    }

    ~Person() {}

    void SetName(string name) {
        this->name = name;
    }

    void SetGender(string gender) {
        this->gender = gender;
    }

    void SetAge(int age) {
        this->age = age;
    }

    void SetWeight(float weight) {
        this->weight = weight;
    }

    string GetName() {
        return name;
    }

    string GetGender() {
        return gender;
    }

    int GetAge() {
        return age;
    }

    float GetWeight() {
        return weight;
    }
};

class Universuty
{
private:
    struct Building
    {
    private:
        int count;
        Person* visitors;
        string name;
    public:
        Building() {
            count = 0;
            visitors = new Person[count];
        }

        ~Building() {
            delete[] visitors;
        }

        void AddVisitor(Person some1) {
            Person* buff = new Person[count]; //буферный массив посетителей, для перезаписи с увеличением основного массива посетителей
            if (count > 0) {
                for (int i = 0; i < count; i++)
                    buff[i] = visitors[i];
            }
            delete[] visitors;
            count += 1;
            visitors = new Person[count];
            for (int i = 0; i < count; i++)
            {
                if (i == count - 1)
                    visitors[i] = some1;
                else
                    visitors[i] = buff[i];
            }
            delete[] buff;

        }

        void DeleteVisitor(Person some1) {
            Person* buff = visitors; //перезапись на уменьшение
            delete[] visitors;
            count -= 1;
            visitors = new Person[count];
            for (int i = 0; i < count; i++)
                visitors[i] = buff[i];
            delete[] buff;
        }

        void ShowVisitors() {
            if (count == 0)
                cout << "Empty\n";
            else {
                for (int i = 0; i < count; i++)
                    cout << "Name - " << visitors[i].GetName() << "\nGender - " << visitors[i].GetGender() << "\nAge - " << visitors[i].GetAge() << "\nWeight - " << visitors[i].GetWeight() << endl << endl;
            }
        }

        void SetName(string name) {
            this->name = name;
        }

        string GetName() {
            return name;
        }

    };

    struct StudingCampus : public Building
    {
        StudingCampus() {
            this->SetName("Studuing campus");
        }
        ~StudingCampus() {

        }
    };
    struct Hostel : public Building
    {
        Hostel() {
            this->SetName("Hostel");
        }
        ~Hostel() {

        }
    };
    struct DiningHall : public Building
    {
        DiningHall() {
            this->SetName("Dining hall");
        }
        ~DiningHall() {

        }
    };
    StudingCampus sc;
    Hostel h;
    DiningHall dh;
public:
    Universuty() {

    }

    ~Universuty() {

    }
    //в учреждении есть занимаемые здания, логика такая.
    //т.к. структуры зданий приватны, обращаться к ним через функции класса
    void PrintBuildings() {
        cout << sc.GetName() << endl << h.GetName() << endl << dh.GetName() << endl;
    }

    void ShowVisitorsInBuilding(string building_name) {
        if (building_name == "Studing Campus")
            sc.ShowVisitors();
        else if (building_name == "Hostel")
            h.ShowVisitors();
        else if (building_name == "Dining Hall")
            dh.ShowVisitors();
    }

    void AddTo(string building_name, Person some1) {
        if (building_name == "Studing Campus")
            sc.AddVisitor(some1);
        else if (building_name == "Hostel")
            h.AddVisitor(some1);
        else if (building_name == "Dining Hall")
            dh.AddVisitor(some1);
    }
};

class Student : public Person
{
private:
    int year_of_study;
public:
    Student()
    {
        year_of_study = 0;
    }

    void SetYearOfStudy(int year_of_study)
    {
        this->year_of_study = year_of_study;
    }

    int GetYearOfStudy()
    {
        return year_of_study;
    }

    ~Student() {}
};

int main()
{
    Universuty Synergy;
    //создаю людей
    Person Alex("Alex", "male", 23, 70), Peter("Peter", "male", 18, 56);
    //показываю имеющиеся здания
    Synergy.PrintBuildings(); cout << endl;
    //кидаю Алекса в учебный корпус
    Synergy.AddTo("Studing Campus", Alex);
    //Петю туда же
    Synergy.AddTo("Studing Campus", Peter);
    // ответ на зпрос "кто в учебном корпусе?"
    Synergy.ShowVisitorsInBuilding("Studing Campus");
    // подтверждение, что никто в столовую не входил
    Synergy.ShowVisitorsInBuilding("Dining Hall");


    return 0;
}

