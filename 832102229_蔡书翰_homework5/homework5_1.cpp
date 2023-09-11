#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double g=32,d=0,d1=0;
    for(int t=0;t<=10;++t){
        d=(double)1/2.0*g*t*t;
        cout<<fixed<<setprecision(1)<<d-d1<<"|";
        cout<<fixed<<setprecision(1)<<d<<endl;
        d1=d;
    }
    return 0;
}