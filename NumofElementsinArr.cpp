#include <iostream>

using namespace std;

int main() {
    /*
    To find out how many elements an array has, 
    divide the size of the array by the size of the data type it contains
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;

    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << "\n";
    }
    
    return 0;
}