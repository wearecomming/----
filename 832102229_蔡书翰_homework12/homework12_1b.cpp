#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Fractions{
    public:
    Fractions(int n=1,int d=1);
    Fractions operator+(const Fractions &a);
    Fractions operator-(const Fractions &a);
    Fractions operator*(const Fractions &a);
    Fractions operator/(const Fractions &a);
    friend ostream& operator<<(ostream& os,const Fractions &a);
    friend istream& operator>>(istream& os,Fractions &a);
    private:
    int num;
    int denom;
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
istream& operator>>(istream& os,Fractions &a){
    string s;
    os>>s;
    int pos=s.find("/",0);
    string s1=s.substr(0,pos),s2=s.substr(pos+1,s.size());
    a.num=atoi(s1.c_str());
    a.denom=atoi(s2.c_str());
    return os;
}