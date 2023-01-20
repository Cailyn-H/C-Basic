//#include <iostream> is a header file library that lets us work with input and output objects, such as cout
#include <iostream>

//using namespace std means that we can use names for objects and variables from the standard library.
using namespace std;

//Any code inside its curly brackets {} will be executed.
int main() {
    /*
    insertion operator (<<) to output/print text
    'endl' and '\n' for the new line start
    */
    cout << "Hellow World!" << endl;

    cout << "I am learning C++\n";

    /*
    if 'using namespace std' is omitted
    do std::cout << "Hello World!"
    */

    int myAge = 24;
    cout << "I am " << myAge << " years old\n";

    int x = 5;
    int y = 10;
    int sum = x + y;
    cout << sum << endl; 

    //can assign mutiple variables using comma 
    int a = 1, b = 2, c = 3;

    //can assign this way as well
    int m, n, l;
    m = n = l = 50;

    /*
    not want others (or yourself) to change existing variable values, 
    use the 'const' keyword (this will declare the variable as "constant", 
    which means unchangeable and read-only)
    */
    const int myNum = 50;
    
    //gets an input
    int k;
    cout << "Type a number: ";
    cin >> k;
    cout << "k is " << k << endl;

    //boolean prints 1 or 0 for true or false
    bool yes = true;
    bool no = false;
    cout << yes << "\n";
    cout << no;

    //ends the main function.
    return 0;
}