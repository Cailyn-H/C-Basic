#include <iostream>

using namespace std;

int main() {
    int myAge = 24;
    cout << "I am " << myAge << " years old\n";

    int x = 5;
    double y = 10.999;
    float sum = x + y;
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

    //boolean prints 1 or 0 for true or false
    bool yes = true;
    bool no = false;
    cout << yes << "\n";
    cout << no;
    
    return 0;
}