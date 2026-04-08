#include <iostream>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int count = (high - low) / 2;
        
        if(low % 2 == 1 || high % 2 == 1)
            count++;
            
        return count;
    }
};
int main() {
    Solution sol;
    int low, high;
    cout << "Enter low and high: ";
    cin >> low >> high;
    cout << "Number of odd integers between " << low << " and " << high << " is: " << sol.countOdds(low, high) << endl;
    return 0;
}