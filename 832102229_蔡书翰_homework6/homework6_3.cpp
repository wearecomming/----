#include<iostream>
using namespace std;
int gcd(int x,int y){return y==0?x:gcd(y,x%y);}
int main(){
    int x,y,u,v;
    cin>>x>>y>>u>>v;
    if(x<y){
        int tmp=x;
        x=y;
        y=tmp;
    }
    if(u<v){
        int tmp=u;
        u=v;
        v=tmp;
    }
    cout<<gcd(x,y)*gcd(u,v);
    return 0;
}