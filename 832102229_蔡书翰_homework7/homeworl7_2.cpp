#include<iostream>
#include<algorithm>
using namespace std;
struct HHH{
    int n,q;
};
HHH a[103]={};
bool cmp(HHH a,HHH b){
    return a.q>b.q;
}
int main(){
    int n=1,q=1;
    cin>>n;
    int tail=0;
    while(n>=0 && q>=0){
        cin>>q;
        a[++tail].n=n;
        a[tail].q=q;
        cin>>n;
    }
    sort(a+1,a+1+tail,cmp);
    cout<<"Part No.      Quantity"<<endl;
    for(int i=1;i<=tail;++i)
        cout<<a[i].n<<"   "<<a[i].q<<endl;
    return 0;
}