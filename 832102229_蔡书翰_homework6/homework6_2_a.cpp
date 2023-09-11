#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"Day   Amount Owed\n---   -----------"<<endl;
    double now=0.1;
    for(int i=1;i<=64;++i,now*=2)
        cout<<left<<setw(3)<<setfill(' ')<<i<<"   "<<fixed<<setprecision(2)<<now<<endl;
    return 0;
}