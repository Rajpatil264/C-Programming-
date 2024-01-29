/**
 * Minimum number and Maximum number
 */

// Code 1:
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Enter the 3 numbers separated by space: ";
    cin >> number1 >> number2 >> number3;

    int maxNum, minNum;

    // Find Maximum
    maxNum = (number1 > number2) ? (number1 > number3 ? number1 : number3) : (number2 > number3 ? number2 : number3);

    // Find Minimum
    minNum = (number1 < number2) ? (number1 < number3 ? number1 : number3) : (number2 < number3 ? number2 : number3);

    cout << "The Maximum number is: " << maxNum << endl;
    cout << "The Minimum number is: " << minNum << endl;

    return 0;
}

// Code 2:
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Enter the 3 numbers separated by space: ";
    cin >> number1 >> number2 >> number3;

    int numbers[] = {number1, number2, number3};

    // Find Maximum
    int maxNum = *max_element(numbers, numbers + 3);

    // Find Minimum
    int minNum = *min_element(numbers, numbers + 3);

    cout << "The Maximum number is: " << maxNum << endl;
    cout << "The Minimum number is: " << minNum << endl;

    return 0;
}
