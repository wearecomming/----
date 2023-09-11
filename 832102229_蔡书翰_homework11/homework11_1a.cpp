#include<iostream>
#include<cstdio>
using namespace std;
class Savings{
    public:
        float balance;
        float rate;
        float interest;
        Savings(){
            this->balance=0;
            this->rate=0;
            this->interest=0;
        }
        void cal(float balance,float rate){
            this->balance=balance;
            this->rate=rate;
            this->interest=balance*rate/100*100;
        }
        void display(){
            cout<<"balance: "<<balance<<endl<<"rate: "<<rate<<endl<<"interest: "<<interest<<"%";
        }
};