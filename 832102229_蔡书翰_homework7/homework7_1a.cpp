#include<iostream>
#include<vector>
using namespace std;
vector <double> a;
int main(){
    double x;
    double sum=0;
    cin>>x;
    while(x>0){
        a.push_back(x);
        sum+=x;
        cin>>x;
    }
    double ave=sum/a.size();
    cout<<"the sum is: "<<sum<<endl<<"the average is: "<<ave<<endl;
    for(int i=0;i<a.size();++i){
        if(a[i]<ave)cout<<"*";
        cout<<a[i]<<endl;
    }
    return 0;
}