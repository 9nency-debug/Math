#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }

    return product - sum;
}

int main() {
    int n;
    cin >> n;
    cout << subtractProductAndSum(n) << endl;
    
    return 0;
}