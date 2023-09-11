#include<iostream>
using namespace std;
int main(){
    cout<<"please input a number:";
    int x;
    cin>>x;
    cout<<"please input the divisor";
    int a;
    cin>>a;
    if(x%a)cout<<"This number is not evenly divisible by the divisor";
    else cout<<"This number is evenly divisible by the divisor";
    return 0;
}