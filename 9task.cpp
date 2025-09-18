#include <iostream>
using namespace std;

void minimal(int* nums, int count);
void maximum(int* nums, int count);
void number(int* nums, int count, int a);
void sum(int* nums, int count);
void pt(int i);

int main(){
    int a = 4;//заданное число
    int nums[]={9,1,2,3};//заданный массив
    int count = sizeof(nums) / sizeof(nums[0]);
//1)
    pt(1);
    minimal(nums, count);

//2)
    pt(2);
    maximum(nums, count);
//3)
    pt(3);
    number(nums, count, a);
//4)
    pt(4);
    sum(nums, count);
}

void minimal(int* nums, int count){
    int min = *nums; 
    int k = 0;
    for(int i = 0; i < count; i++){
        if(min > *(nums + i)){
            min = *(nums + i);
            k = i;
        }    
    }
    cout <<"index of minimal: " << k << endl;
}
void maximum(int* nums, int count){
    int max = *nums;
    int k = 0;
    for(int i = 0; i < count; i++){
        if(max < *(nums + i)){
            max = *(nums + i);
            k = i;
        }
    }
    cout << "maximum element: " << max << endl << "index of maximum: " << k << endl;
}
void number(int* nums, int count, int a){
    int k = 0;
    for(int i = 0; i < count; i++){
        if(*(nums + i) > a)
            k+=1;
    }
    cout << "elements who bigger than given number: " << k << endl;
}

void sum(int* nums, int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += *(nums + i);
    }
    cout << "sum of elements: " << sum << endl;
}

void pt(int i){
    cout << i << ")" << endl;
}