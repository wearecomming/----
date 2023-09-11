#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double E=0,R=0,RC=0,t=0,e=2.71828;
    cout<<"Enter the voltage of the battery:";
    cin>>E;
    cout<<"Enter the resistance of the resistor:";
    cin>>R;
    cout<<"Enter the Time Constant of the capacitor:";
    cin>>RC;
    cout<<"Enter the time in seconds after the switch is closed:";
    cin>>t;
    cout<<"the current is:"<<(E/R)*pow(e,-t/RC);
}