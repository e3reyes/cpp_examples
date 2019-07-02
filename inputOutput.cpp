#include <iostream>
#include <iomanip> // used for formatting
using namespace std;

int main(){
    // input from user
    int input;

    // does not process white space
    cin >> input;
    cin.ignore();
    cout << "input = " << input << endl;

    // process white space 
    char inputA, inputB;
    int inputC;

    cout << "enter input for example 'A 25'" << endl;

    cin.get(inputA);
    cin.get(inputB);
    cin >> inputC; 
    cin.ignore();
    cout << "inputA = " << inputA << endl;
    cout << "inputB = " << inputB << endl;
    cout << "inputC = " << inputC << endl;

    /*
     * When the input fails you have to use the clear()
     * istreamVar.clear()
     * istreamVar can be cin
     * cin.clear()
     */

    // formatting
    // sets the output to 2 decimal places
    // cout << setprecision(2);

    /*
     * setw(#)
     * prints # columns and is right justified only for the next output
     * cout << setw(5) << output << endl;
     */


    // String input
    // #include <string>
    string name;
    cout << "enter  a name" << endl;
    getline(cin, name);
    cout << "the name entered is " << name << endl;
    return 0;
}

