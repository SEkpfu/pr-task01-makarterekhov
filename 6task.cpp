#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    
    string name1, name2;

    float work_h1, work_h2, money_h2, money_h1, total1, total2;

    cout << "имя 1 работника на eng: ";
    cin >> name1; 

    cout << "отработанные часы 1 роботника: ";
    cin >> work_h1;

    cout << "ставка за час 1 работника: ";
    cin >> money_h1;

    cout << "имя 2 работника на eng: ";
    cin >> name2;

    cout << "отработанные часы 2 роботника: ";
    cin >> work_h2;

    cout << "ставка за час 2 работника: ";
    cin >> money_h2;

    total1 = work_h1 * money_h1;
    total2 = work_h2 * money_h2;
    float tax1 = total1 * 0.13;
    float tax2 = total2 * 0.13;
    float total1tax = total1 - tax1;
    float total2tax = total2 - tax2;
    
    cout << "1)" << endl;
    if(total1tax < 1000) cout << name1 << endl;
    if(total2tax < 1000) cout << name2 << endl;

    cout << "2)" << endl;

    int n1 = size(name1);
    int n2 = size(name2);

    if(tax1 > 50){
        cout << name1[0] << "-" << name1[n1-1] << endl;
    }
    if(tax2 > 50){
        cout << name2[0] << "-" << name2[n2-1] << endl;
    }
}
