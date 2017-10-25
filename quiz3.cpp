#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int countChars (string s, int character) {
int count=0;
for (int i = 0; i<s.length(); i++) {
  if (s[i]==character) {
    count++;
  }
}
return count;
}

int main () {
string sentence;
cout << "Please introduce a sentence: "<<endl;
getline (cin, sentence);
cout << "Please introduce the character you want to count: " <<endl;
char character;
cin >> character;
int count = countChars (sentence, character);
cout << "I found " <<count << " of " <<character <<endl;


return 0;
}
