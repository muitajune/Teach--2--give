/* Question 6: Count Vowels
Write a program that counts the number of vowels in a sentence.*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numofvowels = 0;
    string anystring = "";
    cout << "Enter the string: " << endl;
    getline(cin, anystring);
    for (int i = 0; i < anystring.length(); i++) {
        if (anystring[i] == 'a' || anystring[i] == 'e' || anystring[i] == 'i' || anystring[i] == 'o' || anystring[i] == 'u' ||
            anystring[i] == 'A' || anystring[i] == 'E' || anystring[i] == 'I' || anystring[i] == 'O' || anystring[i] == 'U') {
            numofvowels = numofvowels + 1;
        }
    }
    cout << "Number of vowels: " << numofvowels << endl;
    return 0;
}
