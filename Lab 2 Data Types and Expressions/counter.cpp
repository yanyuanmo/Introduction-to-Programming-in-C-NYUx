#include <iostream>

using namespace std;

int main() {
    int num_quarters, num_dimes, num_nickels, num_pennies;
    cout << "Please enter the number of coins: \n";
    cout << "# of quarters: ";
    cin >> num_quarters;
    cout << "# of dimes: ";
    cin >> num_dimes;
    cout << "# of nickels: ";
    cin >> num_nickels;
    cout << "# of pennies: ";
    cin >> num_pennies;
    int total = num_pennies + num_nickels * 5 + num_dimes * 10 + num_quarters * 25;
    int num_dollars = total / 100;
    int num_cents = total % 100;
    cout << "The total is " << num_dollars << " dollars and " << num_cents << " cents";
    return 0;
}
