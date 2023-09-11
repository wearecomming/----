#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream outFile;
    string file="output.txt";
    outFile.open(file.c_str());
    outFile<<"5 96 87 78 93 21 4 92 82 85 87 6 72 69 85 75 81 73";
    return 0;
}