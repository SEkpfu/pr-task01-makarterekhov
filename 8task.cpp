#include <iostream>
using namespace std;

float sum(float h, float s, float p){
    return((h*s*(100 + p)/100) - (h*s*(100 + p)/100 * 0.13));
}
void pt(string name){
    cout << name << ": ";
}

int main(){
    
    cout << "write the number of workers: ";
    int num;
    cin >> num;

    float salary[num];
    float taxes[num];

    float hours, stavka, premium;

    for(int i=0; i<num; i++){
        cout << "data of " << i+1 << " worker: " << endl;
        pt("hours");
        cin >> hours;
        pt("stavka");
        cin >> stavka;
        pt("% premium");
        cin >> premium;
        cout << endl;
        salary[i] = sum(hours, stavka, premium);
        taxes[i] = sum(hours, stavka, premium) * 100 / 87 * 0.13;
    }
//1)
    cout << "1)" << endl;
    int k1 = 0;
    float minn = 99999999999;
    for(int i = 0; i < num; i++){
        if(salary[i] < minn) {
            minn = salary[i];
            k1 = i;
        }
    }
    cout << "the number of worker, who earned less: " << k1 +1  << "-th"  << endl;
//2)
    cout << "2)" << endl;
    float maxx = -1;
    int k2 = 0;
    float max_salary = 0;
    for(int i = 0; i < num; i++){
        if(salary[i] > maxx) {
            maxx = salary[i];
            max_salary = salary[i];
            k2 = i;
        }
    }
    cout << "the maximum salary: " << max_salary << ", the number of worker, who earned it: " << k2 +1 << "-th" << endl;
//3)
    cout << "3)" << endl;
    int k3 = 0;
    for(int i = 0; i < num; i++){
        if(salary[i] > 50000){
            k3+=1;  
        }
    }

    cout << "number of workers, who earned more than 50000: "<< k3 << endl;

    cout << "workers, who earned more than 50000: ";
    for(int i = 0; i < num; i++){
        if(salary[i] > 50000){
            cout << i + 1 << "-th ";
        }
    }

//4)
    cout << endl << "4)" << endl;
    float tax_sum = 0;
    for(int i=0; i < num; i++){
        tax_sum += taxes[i];
    }
    cout << "total amount of tax: " << tax_sum;
    return 0;
}
