/**
* Factorail
*/

//Code 1:
#include<iostream>
using namespace std;

int main(){
  int number, factorial = 1;

  cout << "Enter the number: ";
  cin >> number;

  for(int i = 1; i <= number; ++i) {
    factorial *= i;
  }

  cout << "The factorial of " << number << " is " << factorial;
  return 0;
}



//Code 2:
#include<iostream>
using namespace std;

int calculateFactorial(int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return n * calculateFactorial(n - 1);
}

int main(){
  int number;

  cout << "Enter the number: ";
  cin >> number;

  cout << "The factorial of " << number << " is " << calculateFactorial(number);
  return 0;
}

