#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0; j <= i; j++) {
                sum += nums[j];
            }
            ans[i] = sum;
        }
        
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.runningSum(nums);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}