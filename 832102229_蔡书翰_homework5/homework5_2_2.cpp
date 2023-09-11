#include<iostream>
using namespace std;
int main(){
    char a,b;
    cout<<"please input a character:";
    cin>>a;
    cout<<"please input another character(This character mtsu later than the first character):";
    cin>>b;
    while(b<a){
        cout<<"invalid input,please input the first character:";
        cin>>a;
        cout<<"please input the second character:";
        cin>>b;
    }
    for(int i=(int)a;i<=(int)b;++i)
        cout<<dec<<i<<" "<<oct<<i<<" "<<hex<<i<<endl;
    return 0;
}