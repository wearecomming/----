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
        if(a[i]>=90 && a[i]<=100)cout<<"A ";
        else if(a[i]>=80)cout<<"B ";
        else if(a[i]>=70)cout<<"C ";
        else if(a[i]>=60)cout<<"D ";
        else cout<<"F ";
        cout<<a[i]<<endl;
    }
    return 0;
}