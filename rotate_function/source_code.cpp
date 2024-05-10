
#include <bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int rotation = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        rotation += i * nums[i];
    }

    int max_rotation = rotation;
    
    for (int k = 1; k < n; k++) {
        rotation = rotation + sum - n * nums[n - k];
        max_rotation = max(max_rotation, rotation);
    }

    return max_rotation;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max_rotation = maxRotateFunction(nums);
    cout << "Maximum rotate value: " << max_rotation << endl;

    return 0;
}
