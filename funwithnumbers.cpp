#include <iostream>
using namespace std;

int main ()
{
  int a;
  cout <<"Please enter A:";
  cin>>a;
  int b;
  cout <<"Please enter B:";
  cin>>b;
  cout << " A + B = ";
  cout<< a+b;
  cout << "\r\n A - B = ";
  cout << a-b;
  cout <<"\r\n A * B = ";
  cout << a*b;
  cout << "\r\n A / B = ";
  cout << a/b;
  cout <<"\r\nThe remainder of A/B is ";
  cout << a%b <<endl;
  return 0;
}
