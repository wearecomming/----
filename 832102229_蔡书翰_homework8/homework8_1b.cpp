#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main(){
    ifstream inFile;
    string file="output.txt";
    inFile.open(file.c_str());
    while(inFile.eof()!=true){
        int n;
        inFile>>n;
        int sum=0,x;
        for(int i=1;i<=n;++i){
            inFile>>x;
            sum+=x;
        }
        cout<<(double)sum/n<<endl;
    }
    return 0;
}