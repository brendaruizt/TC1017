#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
  srand(time(NULL));
  int secret = rand () % 100 + 1;

  cout << "I have chosen a number between 1 and 100" <<endl;
  int guess;
  cout << "Guess: " << endl;
  cin >> guess;
  int numberofguesses=1;

  while (guess != secret) {
    if (guess>secret){
      cout << "My number is smaller, guess again" <<endl;
    } else {
      cout <<"My number is bigger, guess again" <<endl;
    }
    cout << "Guess: " << endl;
    cin >> guess;
    numberofguesses++;
  }
cout << "You got it! My number is ";
cout << secret << endl;
cout << "You made " ;
cout << numberofguesses ;
cout <<" guesses to get the number" <<endl;
  return 0 ;
}
