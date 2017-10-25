#include <iostream>
using namespace std;
int mysum (int x,int y) {
  return x+y;
  }
int mysubstraction (int x,int y){
  return x-y;
  }
int times (int x,int y){
  return x*y;
  }
int divide (int x,int y){
  return x/y;
}
int left (int x,int y){
  return x%y;
}
int main ()
{
  int a;
  cout <<"Please enter A:";
  cin>>a;
  int b;
  cout <<"Please enter B:";
  cin>>b;
  cout << " A + B = ";
  cout<< mysum (a,b);
  cout << "\r\n A - B = ";
  cout << mysubstraction (a,b);
  cout <<"\r\n A * B = ";
  cout << times (a,b);
  cout << "\r\n A / B = ";
  cout << divide (a,b);
  cout <<"\r\nThe remainder of A/B is ";
  cout << left (a,b) <<endl;
  return 0;
}
