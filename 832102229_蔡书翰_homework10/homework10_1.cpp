#include<cstdio>
#include<iostream>
using namespace std;
void capit(char * a, char * b,char * c,char * d){
    (*c)=(*a)-'a'+'A';
    (*d)=(*b)-'a'+'A';
}
int main(){
    char a,b,c,d;
    cout<<"please input a lowercase character:";
    cin>>a;
    while(a<='Z'){
        cout<<"This is not a lowercase character,please input again:";
        cin>>a;
    }
    cout<<"please input another lowercase character:";
    cin>>b;
    while(b<='Z'){
        cout<<"This is not a lowercase character,please input again:";
        cin>>b;
    }
    capit(&a,&b,&c,&d);
    cout<<c<<endl<<d;
    return 0;
}