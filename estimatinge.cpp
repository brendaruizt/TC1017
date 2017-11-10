#include <iostream>
#include <cmath>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::abs;

int factorial (int n){
  int answer;
  answer=1;
  while (n>1){
    answer = answer * n;
    n=n-1;
  }
  return answer;
}
double euler(double precision){
  double e=0;
  double n=0;
  double previous=9.9999999;
  while (abs(e-previous)>precision){
    previous=e;
    e= (1.0000000000/factorial (n)+e);
    n++;
  }
  return e;
}

int main(){
double precision;
cout<< "Please introduce the precision you want me to calculate e: "<<endl;
cin>>precision;
cout<< "The value of e is: ";
cout<<setprecision(40)<<euler(precision)<<endl;
return 0;
}
