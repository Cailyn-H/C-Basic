#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "Hello";
    cout << myString[0];

    // Outputs Jello instead of Hello  
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
     
    return 0;
}