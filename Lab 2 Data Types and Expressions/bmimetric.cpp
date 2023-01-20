#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float weight, height;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
    float bmi = weight / pow(height, 2);
    cout << "bmi is: " << round(bmi*100)/100;
    return 0;
}