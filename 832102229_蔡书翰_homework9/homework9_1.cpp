#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    int now=0;
    int first=0;
    char c;
    string ans="";
    while((c=getchar())!='\n'){
        if(c==' '){
            if(now==1){
                now=0;
                ans=ans+' ';
            }
        }
        else{
            if(first==0){
                first=1;
                if(c>='a')c='A'+c-'a';
                ans=ans+c;
                now=1;
                continue;
            }
            if(c<='Z')c='a'+c-'A';
            now=1;
            ans=ans+c;
        }
    }
    cout<<ans;
    return 0;
}