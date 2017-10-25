#include <iostream>
using namespace std;
int factorial (int n){
  int answer;
  answer=1;
  while (n>1){
    answer = answer * n;
    n=n-1;
  }
  return answer;
}

int main () {
unsigned int n;
char answer='y';
do {
  cout << "Please introduce a number so that I can calculate the factorial: ";
  cin >> n;
  cout << "The factorial of ";
  cout<< n;
  cout<< " is ";
  cout<< factorial (n) << endl;
  cout<< "Would you like to try with another number? (y=yes and n=no) :";
  cin >> answer;
  }
  while (answer=='y');
cout << "Ok, thank you!" <<endl;
return 0;
}
