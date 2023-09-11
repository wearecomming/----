#include<iostream>
int main(){
    double vin=1.5,rin=1,rout=0.75;
    double vout=vin*(rin/rout)*(rin/rout);
    std::cout<<"The velocity of water flowing out of the tube is:"<<vout<<std::endl;
    return 0;
}