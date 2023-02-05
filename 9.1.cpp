#include <iostream>
#include <conio.h>

using namespace std;

char Get() {
    char ch = 0;
    cin >> ch;
    return ch;
}

void Credit(float fst_sum, float crdt_sum, float persnt, float years) {
    float month = years * 12;
    float credit_sum = crdt_sum - fst_sum;
    float persantage = 0;
    crdt_sum -= fst_sum;
    cout << "Month\tPayment\t\tRemainder\tPercent" << endl;
    for (int i = 1; credit_sum > 0 ; i++) {

        //можно закоментить кейс и проверить работоспособность расчёта без доп. погашения
        cout << "Are you going to pay extra? y/n\n";
        switch (Get()) {
        case 'y': {
            float n;
            cout << "Then amount of money - ";
            cin >> n;
            if (n <= credit_sum)
                credit_sum -= n;
            else
                cout << "This is more than necessary!\n";
            break;
        }
        case 'n': {
            cout << "Fine." << endl;
            break;
        }
        default: {
            cout << "Counted as a refusal." << endl;
            break;
        }
        }

        if ((credit_sum) > (crdt_sum / month)) {
            credit_sum -= crdt_sum / month;
            cout << i << "\t" << (crdt_sum / month) + ((credit_sum + (crdt_sum / month)) * 0.08) / 12 << "\t\t" << credit_sum << "\t\t" << ((credit_sum + (crdt_sum / month)) * 0.08) / 12 << endl;
        }
        else if ((credit_sum) <= (crdt_sum / month)) {
            cout << i << "\t" << (credit_sum) + (credit_sum * 0.08) / 12 << "\t\t" << credit_sum - credit_sum << "\t\t" << (credit_sum * 0.08) / 12 << endl;
            credit_sum -= credit_sum;
        }
    }
}

int main()
{
    /*
    float installment = 0, credit = 0, percent = 0, years = 0;
    cout << "Enter the following data:\n" << "First installment - ";
    cin >> installment;
    cout << "Amount of credit - ";
    cin >> credit;
    cout << "Percent - ";
    cin >> percent;
    cout << "Years - ";
    cin >> years;
    cout << endl;
    */
    Credit(50000, 200000, 8, 1);
    return 0;
}