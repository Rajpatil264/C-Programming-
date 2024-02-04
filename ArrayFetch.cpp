/**
 * To find the array element by index
 */

// Solution 1
#include <iostream>
using namespace std;

int main()
{
    int arrNumber[] = {1, 2, 3, 4, 5};
    int index;
    char exitLoop;

    do
    {
        cout << "Enter the index of array to print the element (0 to 4): ";
        cin >> index;

        if (index < 0 || index > 4)
        {
            cout << "Out of bound! Enter a valid index." << endl;
        }
        else
        {
            cout << "Element at " << index << " is: " << arrNumber[index] << endl;
        }

        cout << "Do you want to continue (Y/N): ";
        cin >> exitLoop;

    } while (toupper(exitLoop) == 'Y');

    cout << "End of the program." << endl;

    return 0;
}

// Solution 2
#include <iostream>

using namespace std;

int main()
{
    int arrNumber[] = {1, 2, 3, 4, 5};
    int index{0};
    bool isValidIndex{true};
    char exitloop{'Y'};

    do
    {
        cout << "Enter the index of array to print the element(0 to 4) :";
        cin >> index;
        if (index < 0 || index > 4)
        {
            cout << "Out of bond..! Enter the valid index." << endl;
            continue;
        }
        else
        {
            cout << "Element at " << index << " is :" << arrNumber[index] << endl;
        }
        cout << "Do you want to continue(Y|N) :";
        cin >> exitloop;
        if (toupper(exitloop) == 'Y')
        {
        }
        else
        {
            isValidIndex = false;
            cout << "End of the program..!" << endl;
        }
    } while (isValidIndex);
    return 0;
}