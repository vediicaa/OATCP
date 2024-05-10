#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    int max_product = nums[0];
    int min_product = nums[0];
    int result = max_product;
    
    for (size_t i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            swap(max_product, min_product);
        }
        max_product = max(nums[i], max_product * nums[i]);
        min_product = min(nums[i], min_product * nums[i]);

        result = max(result, max_product);
    }
    return result;
}
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int max_prod = maxProduct(nums);
    cout << "Maximum product of a subarray: " << max_prod << endl;
    return 0;
}
