/**
 * String Reverse
 */

// Code 1:
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word{}, wordReverse{};
    bool compare{true};
    cout << "Enter the word : ";
    getline(cin, word, '~');
    for (int i{static_cast<int>(word.length() - 1)}, j{0}; i >= 0; i--, j++)
    {
        wordReverse[j] = word[i];
    }
    if (word != wordReverse)
    {
        compare = false;
    }
    cout << ((compare) ? "Is palindrome" : "Not palindrome");

    return 0;
}

// Code 2:
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;

    cout << "Enter the word: ";
    getline(cin, word);

    string wordReverse = word;
    reverse(wordReverse.begin(), wordReverse.end());

    cout << (word == wordReverse ? "Is palindrome" : "Not palindrome");

    return 0;
}
