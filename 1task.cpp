#include <iostream>
using namespace std;
int main() {
    double work_hour, money_hour, premium;
   
    cout << "количество отработанных им часов = ";
    cin >> work_hour;

    cout << "ставка почасовой оплаты (руб. в час) = ";
    cin >> money_hour;

    cout << "% премии = ";
    cin >> premium;

    double total = work_hour * money_hour + work_hour * money_hour*premium / 100;

    cout << "Общая зп = " << total << " руб.";


}