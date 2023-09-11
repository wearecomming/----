#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
void display(char * strng,int len){
    for(int i=0;i<len;++i)
        cout<<*(strng+i);
}
int main(){
    char message[]={"Vacation is near"};
    int len=strlen(message);
    display(message,len);
}