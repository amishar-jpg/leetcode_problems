#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        int m = nums1.size();
        int n = nums2.size();

        // Two pointer approach
        while (i < m && j < n) {
            if (nums1[i] == nums2[j]) {

                int num = nums1[i];

                // Add only unique element
                if (result.empty() || result.back() != num) {
                    result.push_back(num);
                }

                // Skip duplicates
                while (i < m && nums1[i] == num) i++;
                while (j < n && nums2[j] == num) j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
