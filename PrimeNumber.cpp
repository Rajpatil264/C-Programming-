/**
* Prime Number
*/

//Code 1:
#include<iostream>
using namespace std;
int main(){
    int number;
    static int count {0};
    cout<<"Enter the number: ";
    cin>>number;
    if(number==1){
        cout<<"Number is neither prime nor co-prime";
    }
    if(number>=2){
        for(int i{1};i<=number;i++){
            if(number%i==0)
                count++;
        }
           
    }
    if(count==2){
        cout<<"Number is prime";
    }
    else{
        cout<<"number is not prime";
    }
}



//Code 2:
#include<iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> number;

    if (number < 2) {
        cout << "Number is neither prime nor composite";
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << number << " is a prime number";
        else
            cout << number << " is not a prime number";
    }

    return 0;
}

//Code 3:
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number";
    else
        cout << number << " is not a prime number";

    return 0;
}

