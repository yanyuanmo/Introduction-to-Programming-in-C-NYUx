#include <iostream>

using namespace std;

int main() {
    int num_quarters, num_dimes, num_nickels, num_pennies, num_dollars, num_cents;
    cout << "# of dollars: ";
    cin >> num_dollars;
    cout << "# of cents: ";
    cin >> num_cents;
    int total_cents = num_dollars*100+num_cents;
    num_quarters = total_cents/25;
    total_cents = total_cents%25;
    num_dimes = total_cents/10;
    total_cents = total_cents%10;
    num_nickels = total_cents/5;
    total_cents = total_cents%5;
    num_pennies = total_cents;
    cout << "The coins are " << num_quarters << " quarters, " << num_dimes << " dimes, " << num_nickels << " nickels and " << num_pennies << " pennies";
    return 0;
}