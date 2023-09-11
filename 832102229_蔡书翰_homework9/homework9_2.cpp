#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    char c;
    int now=0;
    string first="",second="";
    while((c=getchar())!='\n'){
        if(c==' ')now=1;
        else{
            if(now==0)first=first+c;
            else second=second+c;
        }
    }
    cout<<second<<","<<first;
    return 0;
}