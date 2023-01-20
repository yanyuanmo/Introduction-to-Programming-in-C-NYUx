#include <iostream>
using namespace std;
  
int main()
{
    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;
    for (int i = 0; i < num*2; i++) {
        if (i%2==0) {
            cout << i+2 << endl;
        }
    }
    return 0;
}