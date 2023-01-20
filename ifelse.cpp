#include <iostream>
using namespace std;

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << "Old enough to vote!";
    } 
    else {
        cout << "Not old enough to vote.";
    }

    int x = 50, y = 70;

    if (x == y){
        cout << "1";
    }
    else if (x > y) {
        cout << "2";
    }
    else {
        cout << "3";
    }

    return 0;
}