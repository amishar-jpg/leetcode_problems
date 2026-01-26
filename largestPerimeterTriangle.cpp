#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Step 2: Traverse from largest side to smallest
        for (int i = n - 1; i >= 2; i--) {
            // Step 3: Check triangle condition
            if (nums[i - 2] + nums[i - 1] > nums[i]) {
                // Step 4: Return perimeter
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }

        // Step 5: No triangle possible
        return 0;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.largestPerimeter(nums);

    cout << "Largest Perimeter of Triangle: " << result << endl;

    return 0;
}
