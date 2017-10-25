#include <iostream>
using namespace std;
int main ()
{
cout << "I will calculate the sum of integers in the range you provide " <<endl;
int low;
int high;
cout << "Please introduce the range "<<endl;
cout << "From: "; cin >> low;
cout << "To: "; cin >> high;
int x=low;
int total=0;
while ( x <= high ) {
    total = total + x ;
    x++;
  }
cout << "The sum from "; cout << low; cout << " to "; cout << high; cout<< " is "; cout << total <<endl;
return 0;
}
