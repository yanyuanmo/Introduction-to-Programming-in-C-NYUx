#include <iostream>
using namespace std;
  
int main(int argc, char *argv[])
{
    int year = strtol(argv[1], nullptr, 10);
    if (year%100==0) {
        if (year % 400 ==0) {
            cout << year << " was a leap year";
        }
        else {
            cout << year << " was not a leap year";
        }
    }
    else if (year%4==0) {
        cout << year << " was a leap year";
    }
    else {
        cout << year << " was not a leap year";
    }
    return 0;
}
