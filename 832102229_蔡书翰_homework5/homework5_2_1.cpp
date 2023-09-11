#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"please input a number:";
    cin>>n;
    if(n==0){
        cout<<"The number is not prime number";
        return 0;
    }
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0){
            cout<<"The number is not prime number";
            return 0;
        }
    cout<<"The number is prime number";
    return 0;
}