#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct HHH{
    string name;
    int age;
    int Social_Security_number;
    double hourly_wage;
    int years_with_the_company;
};
HHH a[50]={};
int main(){
    cout<<"name:"<<a[24].name<<" number:"<<a[24].Social_Security_number<<endl;
    for(int i=0;i<50;++i){
        a[i].years_with_the_company++;
        a[i].hourly_wage+=50;
    }
    return 0;
}