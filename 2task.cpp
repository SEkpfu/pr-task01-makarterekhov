#include <iostream>
using namespace std;

float all(float hours, float stavka, float premium){
    return hours * stavka * (100 + premium) / 100;
}
float nalog (float total, float tax){
    return total * tax / 100;
}
float all_with_tax(float total, float tax){
    return total - tax;
}


int main(){

    float total = all(70, 100, 10);
    cout <<"общая сумма: " << total << endl;

    float tax = nalog(total, 13);
    cout << "подоходный налог: " << tax << endl;

    float result = all_with_tax(total, tax);
    cout << "сумма, получаемая на руки: " << result;


    return 0;

}