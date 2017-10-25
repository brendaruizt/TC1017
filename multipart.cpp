#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;

struct structure {
  int chars, lines;
};

struct structure counttext (string name) {
  fstream file;
  file.open(name.c_str());
  string line;
  int countlines=0;
  int countchars=0;
while (getline(file, line)){
  countlines++;
  countchars += line.length();
}
  struct structure answer;
  answer.chars = countchars;
  answer.lines= countlines;
  return answer;
}

int main () {
string file;
cout<< "Please introduce a file to count the number of characters and lines in it: "<<endl;
cin >> file;
struct structure answer = counttext(file);
cout <<"There are " << answer.lines <<" lines and " << answer.chars <<" characters in the document. "<<endl;


return 0;
}
