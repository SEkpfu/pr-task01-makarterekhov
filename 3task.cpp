#include <iostream>
using namespace std;
float nums[3];//массив куда попадают все данные после выполнения функций)

void prt(string word, float hours, int i){
    cout << word << ": ";
    cin >> hours;
    nums[i]={hours};
}
void prt(string word, float hours){
    cout << word << ": " << hours << endl;
}

int main(){

    float hours, stavka, premium;
    prt("hours", hours, 0);
    prt("stavka", stavka, 1);
    prt("premium", premium, 2);

    float total = nums[0]*nums[1]*(100+nums[2])/100;
    float tax = total * 0.13;
    float totalwithtax = total - tax;

    prt("total sum", total);
    prt("tax",tax);
    prt("total with tax", totalwithtax);

    return 0;
}