#include<iostream>
#include<cstdio>
using namespace std;
class Cartesian {
    private:
        double x,y;
    public:
        Cartesian(double a=0,double b=0);
        friend ostream& operator<<(ostream& out,const Cartesian &a);
        friend istream& operator>>(istream& in,Cartesian &a);
        void operator=(const Cartesian &a);
};
Cartesian::Cartesian(double a,double b){
    x=a;
    y=b;
}
ostream& operator<<(ostream& out,const Cartesian &a){
    out<<"("<<a.x<<","<<a.y<<")"<<endl;
    return out;
}
istream& operator>>(istream& in,Cartesian &a){
    cout<<"please input x:\n";
    in>>a.x;
    cout<<"please input y:\n";
    in>>a.y;
    return in;
}
void Cartesian::operator=(const Cartesian &a){
    x=a.x;
    y=a.y;
}