#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    Type your first name: John
    Your name is: John
    */
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; 
    cout << "Your name is: " << firstName;

    /*
    Type your first name: John Doe
    Your name is: John
    */
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName;

    /*
    Type your first name: John Doe
    Your name is: John Doe
    */
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
    
    return 0;
}
