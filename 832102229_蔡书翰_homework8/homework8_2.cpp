#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main(){
    ofstream outFile;
    string file="grade.txt";
    outFile.open(file.c_str());
    cout<<"please input the name:(up to 20,input Ctril Z as the end):";
    string name;
    int count=0;
    int e1,e2,h1,f1;
    outFile<<"Name Exam 1 Grade Exam 2 Grade Homework Grade Final Exam Grade Final Grade Letter Grade\n";
    while(count<20 && (cin>>name)){
        ++count;
        cout<<"please input the Exam 1 Grade:";
        cin>>e1;
        cout<<"please input the Exam 2 Grade:";
        cin>>e2;
        cout<<"please input the Homework Grade:";
        cin>>h1;
        cout<<"please input the Final Exam Grade:";
        cin>>f1;
        double socre=0.2*e1+0.2*e2+0.35*h1+0.25*f1;
        outFile<<name<<" "<<e1<<" "<<e2<<" "<<h1<<" "<<f1<<" "<<socre<<" ";
        if(socre>=90 && socre<=100)
            outFile<<"A"<<endl;
        else if(socre>=80)
            outFile<<"B"<<endl;
        else if(socre>=70)
            outFile<<"C"<<endl;
        else if(socre>=60)
            outFile<<"D"<<endl;
        else
            outFile<<"E"<<endl;
        cout<<"please input the name:(up to 20,input Ctril Z as the end):";
    }
    outFile.close();
    ifstream inFile;
    string file1="grade.txt";
    string s;
    inFile.open(file1.c_str());
    while(inFile.eof()!=true){
        getline(inFile,s);
        cout<<s<<endl;
    }
    return 0;
}