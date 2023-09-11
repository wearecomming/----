#include<iostream>
#include<cstdio>
#include "homework11_2a.cpp"
using namespace std;
int main(){
    Elevator e;
    e.request(100);
    e.request(-1);
    e.request(13);
    e.request(1);
    return 0;
}