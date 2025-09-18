#include <iostream>
using namespace std;
void pt(string h){
    cout << h << ": ";

}
void pt(string h, float b){
    cout << h << " = " << b << endl;
}
int main(){
    float hours, stavka;
    pt("hours 1");
    cin >> hours;
    pt("stavka 1");
    cin >> stavka;
    float t1 = hours * stavka;
    
    
    pt("hours 2");
    cin >> hours;
    pt("stavka 2");
    cin >> stavka;
    float t2 = hours * stavka;
    

    pt("hours 3");
    cin >> hours;
    pt("stavka 3");
    cin >> stavka;
    float t3 = hours * stavka;
    

    pt("hours 4");
    cin >> hours;
    pt("stavka 4");
    cin >> stavka;
    float t4 = hours * stavka;
    

    pt("hours 5");
    cin >> hours;
    pt("stavka 5");
    cin >> stavka;
    float t5 = hours * stavka;
    
    cout << endl;

    pt("summa 1", t1);
    pt("summa 2", t2);
    pt("summa 3", t3);
    pt("summa 4", t4);
    pt("summa 5", t5);

    cout << "medium sum: " << (t1 + t2 + t3 + t4 + t5)/5;



    return 0;
}