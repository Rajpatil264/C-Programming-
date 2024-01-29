/**
* Even and Odd
*/

//Code 1:
#include<iostream>
using namespace std;

int main(){
    unsigned int number{0};
    cout<<"Enter the number:"<<endl;
    cin>>number;
    
    if(number%2==0){
        cout<<"The "<<number<<" is even";
    }
    else{
        cout<<"The "<<number<<" is odd";
    }
    
}

//Code 2:
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    cout << (number % 2 == 0 ? "Even" : "Odd");

    return 0;
}

