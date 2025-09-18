#include <iostream>
using namespace std;

float nums[3];//массив куда попадают все данные после выполнения функций)

void prt(string word, float hours, int i){
    cout << word << ": ";
    cin >> hours;
    nums[i]={hours};
}

void res(float h, float s,float p){
    cout << "total sum: " << h*s*(100+p)/100 << endl;
    cout << "tax: " << h*s*(100+p)/100 * 0.13 << endl;
    cout << "total with tax: " << h*s*(100+p)/100 * 0.87;
}

int main(){

    float hours, stavka, premium;
    prt("hours", hours, 0);
    prt("stavka", stavka, 1);
    prt("premium", premium, 2);

    res(nums[0], nums[1], nums[2]);

    return 0;
}