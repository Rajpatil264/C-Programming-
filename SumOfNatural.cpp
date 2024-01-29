/**
* Sum of the Natural Numbers
*/

//Code 1:
#include<iostream>
using namespace std;

int main(){
    int number{0},sum{0};
    cout<<"Enter the number upto u want to calulate the sum :";
    cin>>number;
    sum=static_cast<int>(((number*number)+number)/2);
    cout<<"The Sum upto "<<number<<" natural number is :"<<sum;
    return 0;
}


//Code 2:
#include<iostream>
using namespace std;

int main(){
    int number, sum = 0, i = 1;

    cout << "Enter the number up to which you want to calculate the sum: ";
    cin >> number;

    while (i <= number) {
        sum += i;
        ++i;
    }

    cout << "The Sum of the first " << number << " natural numbers is: " << sum;
    return 0;
}
