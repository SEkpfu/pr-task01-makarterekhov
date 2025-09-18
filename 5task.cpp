#include <iostream>
using namespace std;
int main() {

    float work_h1, work_h2, money_h2, money_h1, total1, total2;

    cout << "отработанные часы 1 роботника: ";
    cin >> work_h1;

    cout << "ставка за час 1 работника: ";
    cin >> money_h1;


    cout << "отработанные часы 2 роботника: ";
    cin >> work_h2;

    cout << "ставка за час 2 работника: ";
    cin >> money_h2;

    total1 = work_h1 * money_h1;
    total2 = work_h2 * money_h2;
    
    if(total1 > total2) {
        cout << "1 работник заработал больше" << endl;
    }
    else {
        cout << "2 работник заработал больше" << endl;
    }
    cout << "сумма, заработанная вместе: " << total1 + total2;
    return 0;
}