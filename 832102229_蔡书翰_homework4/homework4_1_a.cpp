#include<iostream>
using namespace std;
int main(){
    cout<<"the hours worked:";
    int x;
    cin>>x;
    int ans;
    if(x<=40)ans=x*12;
    else ans=480+(x-40)*17;
    cout<<"the salary is:"<<ans;
    return 0;
}