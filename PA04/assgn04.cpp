#include <cstdlib>
#include <iostream>
#include <set>
#include <string>
#include "Stack.h"

/**
 * Main program for the Doane RPN calculator.
 */
int main() {
    using namespace std;
    
    // welcome prompt
    cout << "Welcome to the Doane RPN Calculator!" << endl;
    cout << "Please enter an expression in postfix, EOF to quit." << endl;
    
    // prepare stack
    Stack<double> stack;

    // read string tokens until there is nothing more to read    
    string token;
    while(cin >> token) {
        // TODO: based on token type (operator, "E", or number),
        // use the stack to implement the operations of the
        // RPN calculator. 
    }
    
    // good by prompt
    cout << "Good bye!" << endl;
    
    return EXIT_SUCCESS;
}