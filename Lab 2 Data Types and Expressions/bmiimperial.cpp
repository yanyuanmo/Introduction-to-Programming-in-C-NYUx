#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float weight, height;
    cout << "Please enter weight in pounds: ";
    cin >> weight;
    cout << "Please enter height in inches: ";
    cin >> height;
    weight = weight*0.453592;
    height = height*0.0254;
    float bmi = weight / pow(height, 2);
    cout << "bmi is: " << round(bmi*100)/100;
    return 0;
}
