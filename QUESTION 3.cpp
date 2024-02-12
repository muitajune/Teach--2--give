/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.*/
#include <iostream>
using namespace std;
bool isPowerOfTwo(int num) {
	 return num > 0 && (num & (num - 1)) == 0;
}
int main()
{
	int integer;
	cout<<"enter your integer" <<endl;
	cin >> integer;
	 bool result = isPowerOfTwo(integer); // checks whether the integer entered is in power of 2
	 if (result) {
        cout << integer << " AWESOME IT IS A POWER OF TWO." << endl;
    } else {
        cout << integer << " AAGH IT IS NOT A POWER OF TWO TRY ANOTHER ONE PLEASE." << endl;
    }
    return 0;
}