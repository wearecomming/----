#include<iostream>
#include<cstdio>
using namespace std;
class Elevator
{
private:
    int elNum; // elevator number
    int currentFloor; // current floor
    int highestFloor; // highest floor
public:
    Elevator(int = 1, int = 1, int = 15); // constructor
    void request(int);
};
Elevator::Elevator(int elNum, int currentFloor, int highestFloor){
    this->elNum=elNum;
    this->currentFloor=currentFloor;
    this->highestFloor=highestFloor;
}
void Elevator::request(int floor){
    if(floor<=0 || floor>highestFloor || floor ==currentFloor)return;
    if(floor>currentFloor){
        cout<<"current floor: "<<currentFloor<<endl;
        while(floor > currentFloor){
            currentFloor++;
            cout<<"new floor: "<<currentFloor<<endl;
        }
        cout<<"ending floor: "<<currentFloor<<endl;
    }
    else{
        cout<<"current floor: "<<currentFloor<<endl;
        while(floor < currentFloor){
            currentFloor--;
            cout<<"new floor: "<<currentFloor<<endl;
        }
        cout<<"ending floor: "<<currentFloor<<endl;
    }
}