/**
* Vowel and Consonant
*/

//Code 1:
// Solution 1
#include <iostream>
using namespace std;

int main() {
  char alphabet;
  cout << "Enter the alphabet: "; 
  cin >> alphabet;

  if(tolower(alphabet) == 'a' || tolower(alphabet) == 'e' || tolower(alphabet) == 'i' || 
     tolower(alphabet) == 'o' || tolower(alphabet) == 'u') {
       
    cout << alphabet << " is a vowel";  
  }
  else {
    cout << alphabet << " is a consonant"; 
  }

  return 0;
}


//Code 2:
#include <iostream>
using namespace std;

int main() {
  char alphabet;
  cout << "Enter the alphabet: "; 
  cin >> alphabet;

  if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
     alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
       
    cout << alphabet << " is a vowel";  
  }
  else {
    cout << alphabet << " is a consonant"; 
  }

  return 0;
}

