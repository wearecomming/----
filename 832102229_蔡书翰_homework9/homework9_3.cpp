#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    char c;
    int now=0;
    string first[5]={},second[5]={};
    for(int i=1;i<=5;++i){
        now=0;
        while((c=getchar())!='\n'){
            if(c==' ')now=1;
            else{
                if(now==0)first[i-1]=first[i-1]+c;
                else second[i-1]=second[i-1]+c;
            }
        }
    }
    for(int i=0;i<5;++i)
        cout<<second[i]<<","<<first[i]<<endl;
    return 0;
}