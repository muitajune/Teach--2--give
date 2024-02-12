/*Question 5: Reverse Integer
Write a program that takes an integer as input and returns an integer with reversed digit 
ordering */
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter num of your choice: ";
    cin >> num;

    // Here we gonna reverse the number using this code
    int reversednum = 0;
    while (num != 0) {
        reversednum = reversednum * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed num: " << reversednum << endl;
    return 0;
}

 