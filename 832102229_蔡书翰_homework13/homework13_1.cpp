#include<iostream>
#include<cstdio>
using namespace std;
struct Inventory
 {
  char description[50];
  int prodnum;
  int quantity;
  double price;
 };
 Inventory a[100]={};
int main(){
a[82].prodnum=4355;
cout<<a[15].price;
return 0;
}