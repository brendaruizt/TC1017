#include <iostream>
using namespace std;

int main ()
{
int temperature;
cout << "Please enter a temperature in °F: ";
cin >> temperature;
cout << "The temperature in °C is: ";
cout << 5*(temperature -32)/9;
if (temperature>=212)
  cout <<"\r\nWater boils at this temperature";
  else cout <<"\r\nWater does not boil at this temperature";
  cout <<endl;

return 0;
}
