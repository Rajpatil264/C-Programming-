/**
 * All string basic
 */

// Code :1
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the sentence: ";
    getline(cin, str);

    cout << "The length of the string: " << str.length() << endl;
    cout << "The first letter of the string: " << str.front() << " last letter is: " << str.back();

    return 0;
}

// Code :2
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1{0}, str2{0};
    cout << "Enter the sentence :";
    getline(cin, str1);
    cout << "Enter the sentence :";
    getline(cin, str2);

    cout << "Combining the String:" << endl;
    cout << str1 + str2 << endl;
    cout << str1.append(str2) << endl;
    cout << str1;
    return 0;
}