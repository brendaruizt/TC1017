#include <iostream>
using namespace std ;

int rev (int number) {
    int answer = 0;
    do {
        answer = ((answer + (number % 10)) * 10 ) ;
        number = number / 10 ;
    } while (number > 0) ;
    answer = answer / 10 ;
    return answer ;
}

int main () {
    int low;
    int high;
    int n = 0;
    int copy;
    int reverse;
    int palindrome = 0;
    int lychrel = 0;
    int nonlychrel = 0;
    cout << "Please introduce the lower bound" << endl ;
    cin >> low ;
    cout << "Please introduce the upper bound" << endl ;
    cin >> high ;
    copy = low ;
    int count = low ;
    do {
        reverse = rev(copy);
        if (copy == reverse){
            palindrome ++ ;
        }else
            do {
                copy = reverse + copy ;
                reverse = rev(copy) ;
                if (reverse == copy) {
                    nonlychrel ++;
                    break ;
                }
                n ++ ;
            } while ( n < 30) ;
            if (copy!=reverse){
              lychrel ++ ;
            }
        count = count + 1 ;
        copy = count ;
    } while ( copy <= high) ;
    cout << "From " << low << " to " << high << " are: " << endl ;
    cout << palindrome << " palindromes" << endl;
    cout << nonlychrel << " non lychrel" << endl ;
    cout << lychrel << " lychrel candidates" << endl ;

    return 0 ;
}
