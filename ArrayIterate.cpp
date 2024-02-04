/**
 * Ways to iterate the array
 */

// Code 1:
//  Solution 1
#include <iostream>

using namespace std;

int main()
{
  int arrNumber[] = {1, 2, 3, 4, 5};
  cout << "Elememts of the array :" << endl;
  for (int iterate : arrNumber)
    cout << iterate << "\t";
  return 0;
}

// Code 2:
#include <iostream>
using namespace std;

int main()
{
  int arrNumber[] = {1, 2, 3, 4, 5};
  cout << "Elements of the array: ";

  for (int i = 0; i < sizeof(arrNumber) / sizeof(arrNumber[0]); ++i)
    cout << arrNumber[i] << "\t";

  cout << endl;
  return 0;
}
