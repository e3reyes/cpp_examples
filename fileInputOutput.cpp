#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    ifstream inData;
    ofstream outData;
    // use the '//' for directories
    inData.open("prog.dat"); // open the input file
    outData.open("prog.out"); // open the output file
    
    string line;
    getline(inData, line);
    cout << "The line read is:\n" << line << endl;
    inData.close();

    outData << "line read is \n" << line << endl;
    outData.close();
    return 0;
}
