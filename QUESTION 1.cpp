/*Question 1: FizzBuzz
Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
"FizzBuzz".*/
#include <iostream>
using namespace std;

int main() {
    cout << "The outcome:" << endl;
    
    for (int k = 1; k <= 100; ++k) {
        if (k % 3 == 0 && k % 5 == 0) { // this checks whether it's a multiple of 3 and 5
            cout << "FizzBuzz" << endl;
        } else if (k % 3 == 0) { // this checks whether it's a multiple of 3
            cout << "Fizz" << endl;
        } else if (k % 5 == 0) { // this checks whether it's a multiple of 5
            cout << "Buzz" << endl;
        } else {
            cout << k << endl; // it prints the number
        }
    }
    
    return 0;
}
