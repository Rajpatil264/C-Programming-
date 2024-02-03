/**
* Even and Odd Sum 
*/

//Code 1:
// Solution 1
#include<iostream>
#include<string>
using namespace std;

int main() {
    int number{0},evenSum{0},oddSum{0};
    cout<<"Enter the number :";
    cin>>number;
    int i{0};
    while(i<=number){
        if(i%2==0)
            evenSum+=i;
        else
            oddSum+=i;
        i++;
        }
    cout<<"Sum of the even number:"<<evenSum<<endl;
    cout<<"Sum of the odd number:"<<oddSum;
    return 0;
}

