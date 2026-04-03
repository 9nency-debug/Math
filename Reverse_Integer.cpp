#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long rev = 0;
        while(x != 0){
            int digit = x % 10; 
            rev = rev * 10 + digit; 
            x = x / 10;

            if(rev > INT_MAX || rev < INT_MIN){
                return 0;
            }
        }
        
        return (int)rev;
    }
};
int main(){
    Solution sol;
    int x = 123;
    cout << sol.reverse(x) << endl; // Output: 321

    x = -123;
    cout << sol.reverse(x) << endl; // Output: -321

    x = 120;
    cout << sol.reverse(x) << endl; // Output: 21

    x = 0;
    cout << sol.reverse(x) << endl; // Output: 0

    return 0;
}