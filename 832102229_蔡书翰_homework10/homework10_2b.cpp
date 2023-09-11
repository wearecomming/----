#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
void display(char * strng,int len){
    for(char * beg = strng;strng-beg<len;strng++)
        cout<<*strng;
}
int main(){
    char message[]={"Vacation is near"};
    int len=strlen(message);
    display(message,len);
}