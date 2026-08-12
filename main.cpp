#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// Declarations before main
// Declaration / Prototype
void greet();

// Declaration Formal Parameters
void displayByValue(string s);

void displayByReference(string &s);

int main() {
    // Function call, only name and parameters
    greet();

    //Call.  Actual Parameter
    string original = "I'm what gets copied or referenced";
    
    displayByValue(original);
    cout << original << endl;

    displayByReference(original);
    cout << original << endl;

    return 0;
}

// Implementations go after main or a different file
void greet() {
    cout << "Greetings from the greet function!" << endl;
}
       
            // Actual Parameter
void displayByValue(string copy) {
    cout << copy << endl;
    copy = copy + " appending to copy";
    cout << copy << endl;
}

void displayByReference(string &reference) {
    cout << reference << endl;
    reference = reference + " appending to &reference";
    cout << reference << endl;
}