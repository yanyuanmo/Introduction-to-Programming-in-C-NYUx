#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    cout << "Please enter 4 positive integers, separated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4;
    int num_odd, num_even;
    num_odd = 0;
    num_even = 0;
    if (num1%2==0) {
        num_even+=1;
    }
    else {
        num_odd += 1;
    }
    if (num4%2==0) {
        num_even+=1;
    }
    else {
        num_odd += 1;
    }
    if (num2%2==0) {
        num_even+=1;
    }
    else {
        num_odd += 1;
    }
    if (num3%2==0) {
        num_even+=1;
    }
    else {
        num_odd += 1;
    }
    if (num_even>num_odd) {
        cout << "more evens";
    }
    else if (num_even<num_odd) {
        cout << "more odds";
    }
    else {
        cout << "same number of evens and odds";
    }
    return 0;
}