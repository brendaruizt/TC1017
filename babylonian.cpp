#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::abs;
float squaredroot (float number, float guess) {
  float babylonian=0;
do {
    babylonian = guess;
    guess = ((0.5)*(guess+(number/guess)));
  }   while (abs(babylonian-guess)>0.0001);
  return babylonian;
}

int main () {
float number;
float answer;
float guess;
cout << "Please introduce a number to calculate its squared root: "<<endl;
cin >> number;
cout << "Please introduce a guess: "<<endl;
cin >> guess;
answer = squaredroot (number,guess);
if (number>=0) {
  cout << "The squared root of " << number << " is "<< answer << endl;
} else {
    cout << "The answer is an imaginary number" <<endl;
  }
return 0;
}
