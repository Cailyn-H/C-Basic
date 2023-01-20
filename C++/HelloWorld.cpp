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

    //ends the main function.
    return 0;
}