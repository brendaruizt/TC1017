#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;
using std::tolower;
using std::transform;

int find_banana (string name) {
  fstream file;
  file.open(name.c_str());
  string line;
  int count=0;
  while (getline (file, line)) {
    transform(line.begin(),line.end(),line.begin(), (int (*)(int))tolower);
    int findbanana = line.find("banana");
    while (findbanana != -1){
      count++;
      findbanana = line.find("banana", findbanana+1);
    }
  }
return count;
}

int main () {
string file;
cout << "Introduce a file: "<<endl;
cin >> file;
int numberofbananas=find_banana(file);
cout<<"There are "<<numberofbananas<< " bananas found in the document."<<endl;
return 0;
}
