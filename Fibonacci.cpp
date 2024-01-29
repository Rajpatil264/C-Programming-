/**
* Fibonacci Series
*/

//Code 1:
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number for the series: ";
    cin >> number;

    int firstNum = 0, secondNum = 1, fibo = 0;

    cout << "Fibonacci Series: ";
    for(int i = 1; i <= number; ++i){
        cout << fibo << "\t";
        fibo = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = fibo;
    }

    return 0;
}

