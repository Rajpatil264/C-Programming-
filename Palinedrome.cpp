/**
 * Checking the number is palinedrome or not
 */

// Code 1:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number{0};
    string str{}, rev{};

    cout << "Enter the number: ";
    cin >> number;

    str = to_string(number);
    rev.resize(str.length());
    for (int i = str.length() - 1, j{0}; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }

    int numberRev = stoi(rev);
    cout << ((number == numberRev) ? "The number is palindrome" : "No its not a palindrome number");
}

// Code 2:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number{0};
    string str{}, rev{};
    cout << "Enter the number: ";
    cin >> number;

    str = to_string(number);
    reverse(str.begin(), str.end());
    cout << str << endl;

    int numberRev = stoi(str);
    cout << ((number == numberRev) ? "The number is palindrome" : "No its not a palindrome number");
}
