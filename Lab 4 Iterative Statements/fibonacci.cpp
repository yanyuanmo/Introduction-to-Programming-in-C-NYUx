#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    int num;
    cout << "Please enter a positive integer greater than 1: ";
    cin >> num;
    vector<int> nums = {1, 1};
    if (num > 2) {
        for (int i = 0; i < num-2; i++) {
            nums.push_back(nums[nums.size()-1]+nums[nums.size()-2]);
        }
    }
    for (int i = 0; i < num; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}
