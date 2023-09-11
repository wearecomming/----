#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double now=0.1;
    double sum=now;
    for(int i=1;;++i,now*=2,sum+=now)
        if(sum>=1000000){
            cout<<"in "<<i<<" day,  the king will have paid the beggar a total of one million dollars";
            return 0;
        }
    return 0;
}