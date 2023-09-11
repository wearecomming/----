#include<iostream>
using namespace std;
int main(){
    int a[3];
    cout<<"first card:";
    cin>>a[0];
    cout<<"second card:";
    cin>>a[1];    
    cout<<"third card:";
    cin>>a[2];
    int sum=0;
    for(int i=0;i<=2;++i){
        if(a[i]>10)a[i]=10;
        if(a[i]==1)a[i]=11;
        sum+=a[i];
    }
    if(sum>21)
        for(int i=0;i<=2;++i)
            if(a[i]==11)
                a[i]=1;
    sum=0;
    for(int i=0;i<=2;++i)sum+=a[i];
    cout<<"the total value is :"<<sum<<endl;
    for(int i=0;i<=2;++i)
        cout<<"the value of "<<i+1<<" card is : "<<a[i]<<endl;
    return 0;
}