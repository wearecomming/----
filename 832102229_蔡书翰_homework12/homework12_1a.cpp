#include<cstdio>
#include<iostream>
using namespace std;
class Fractions{
    public:
    int num;
    int denom;
    Fractions(int n=1,int d=1);
    Fractions operator+(const Fractions &a);
    Fractions operator-(const Fractions &a);
    Fractions operator*(const Fractions &a);
    Fractions operator/(const Fractions &a);
    friend ostream& operator<<(ostream& os,const Fractions &a);

};
Fractions::Fractions(int n,int d){
    num=n;
    if(d==0)d=1;
    denom=d;   
}
Fractions Fractions::operator+(const Fractions &a){
    return Fractions(a.num*denom+a.denom*num,a.denom*denom);
}
Fractions Fractions::operator-(const Fractions &a){
    return Fractions(a.num*denom-a.denom*num,a.denom*denom);
}
Fractions Fractions::operator*(const Fractions &a){
    return Fractions(a.num*num,a.denom*denom);
}
Fractions Fractions::operator/(const Fractions &a){
    return Fractions(a.num*denom,a.denom*num);
}
ostream& operator<<(ostream& os,const Fractions &a){
    os<<a.num<<"/"<<a.denom;
    return os;
}