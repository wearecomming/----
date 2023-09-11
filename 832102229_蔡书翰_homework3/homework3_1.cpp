#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double x1=0,x2=0,y1=0,y2=0;
    cout<<"Point1`s x:";
    cin>>x1;
    cout<<"Point1`s y:";
    cin>>y1;
    cout<<"Point2`s x:";
    cin>>x2;
    cout<<"Point2`s y:";
    cin>>y2;
    cout<<"The x coordinate of the midpoint is "<<setw(3)<<fixed<<setprecision(2)<<(x1+x2)/2<<endl;
    cout<<"The y coordinate of the midpoint is "<<setw(3)<<fixed<<setprecision(2)<<(y1+y2)/2<<endl;
}