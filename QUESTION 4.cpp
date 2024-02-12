/*Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.*/
#include <iostream>// includes the input output library
#include <string>//icludes strring library

using namespace std;

int main() {
    string entry;
    cout << "Enter String of your choice please: ";
    getline(cin, entry); //This reads the entire string
    
    // Capitalize the first letter of each word
    for (size_t i = 0; i < entry.length(); ++i) {
        // Capitalize the first letter of the string or the letter following a space
        if (i == 0 || entry[i - 1] == ' ') {
            entry[i] = toupper(entry[i]);
        }
    }
    
    cout << "The output in capital now: " << entry << endl;
    return 0;
}
