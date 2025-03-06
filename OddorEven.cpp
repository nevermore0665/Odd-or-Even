#include <iostream>
using namespace std;                    // avoids having to call std:: everytime

int main() {
    int number;                         // intitialiazes a variable called number
    int remainder;                      // a value to hold if the number is even or odd
    cout << "Enter an Integer: " ; 
    cin >> number;
    remainder = number % 2;             // puts a value of 1 or 0 to the variable remainder

    if (remainder == 1) {
        cout << number << " is and odd number \n";   // uses remainder to see iff it is odd  and prints odd
        system ("PAUSE");                            // the .exe file was terminating prematurely put in to see what is printed out
    } else if (remainder == 0) {                     // could use else since it is binary but decided on else if.
        cout <<  number << " is and even number. \n";   //uses remainder to see iff it is even and prints even
        system ("PAUSE");                               // the .exe file was terminating prematurely put in to see what is printed out
    }

return 0;
}