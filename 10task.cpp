#include <iostream>
using namespace std;

const int months = 3;//можно 12 заменить на 3, чтобы быстрее проверить

float salary[4][months];
float hours[4][months];
float tax[4][months];

void slr(float s, float p, float h);
void pt(int i);

int main(){

    float stavka, hours, premium;
    slr(stavka, premium, hours);

    pt(1);
    cout << "salary 1-th worker in 2-th month: " << salary[1][2] << endl;

    pt(2);
    float sum_tax = 0;
    for(int i = 0; i < months; i++){
        sum_tax += tax[3][i];
    }
    cout << "sum of taxes of 3-th worker: " << sum_tax << endl;

    pt(3);
    int k;
    float max = 0;
    for(int i=0; i<4; i++){
        if(max < salary[i][3]){
            max = salary[i][3];
            k = i;
        }
    }
    cout << "number of worker who earned the most in 3-th month: " << k << "-th" << endl;

    pt(4);
    float all = 0;
    for(int i=0; i < 4; i++){
        for(int j=0; j < months; j++){
            all += salary[i][j];
        }
    } 
    cout << "all sum of the year: " << all << endl;


}

void slr(float s, float p, float h){
    for(int i = 1; i <= 4; i++){
        cout << "stavka " << i << "-th worker: ";
        cin >> s;
        cout << "% premium " << i << "-th worker: ";
        cin >> p;
        for(int j = 1; j <= months; j++){
            cout << "hours " << i << "-th worker in " << j << "-th month: ";
            cin >> h;
            hours[i][j] = h;
        }
        for(int u = 1; u <= months; u++){
            salary[i][u] = s * hours[i][u] * (100 + p)/ 100 * 0.87;
            tax[i][u] = s * hours[i][u] * (100 + p)/ 100 * 0.13;
        }
        cout << endl;
    }    
}

void pt(int i){
    cout << i << ")" << endl;
}