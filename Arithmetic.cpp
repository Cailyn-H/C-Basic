#include <iostream>

using namespace std;

int main() {
    int x = 10, y = 5;
    int sum = x + y;
    cout << sum << endl;

    int sub = x - y;
    cout << sub << endl;

    int mul = x * y;
    cout << mul << endl;

    double div = y/x;
    cout << div << endl;

    double modulus = y%x;
    cout << modulus << endl;

    //increment
    cout << "increase x by 1 = " << ++x << endl;

    //decrement
    cout << "decrease y by 1 = " << --y;

    return 0;
}