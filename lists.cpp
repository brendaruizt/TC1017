#include <iostream>
#include <cmath>
using namespace std;

float aver (float numbers, int total) {
float answer = numbers/total;
return answer;
}

float standDev (float numbers [], float average, int size) {
int i=0;
float answer = 0.0;
do {
  answer = pow ((numbers [i] - average),2) + answer;
  i++;
} while (i<size) ;
answer = answer / size;
answer = sqrt (answer);
return answer;
}

int main () {
int i;
float numbers [10];
float sum = 0.00;
for(i = 0; i < 10 ; i++) {
  cout << "Please enter 10 numbers (float): ";
  cin >> numbers [i];
  sum = sum + numbers [i];
}
float average = aver (sum, 10);
cout << "The total is: ";
cout << sum <<endl;
cout << "The average is: ";
cout << average <<endl;
cout << "The standard deviation is: ";
cout << standDev (numbers, average,10) <<endl;


return 0;
}
