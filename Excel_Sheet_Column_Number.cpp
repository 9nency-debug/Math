#include <iostream>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    
    for (char c : columnTitle) {
        result = result * 26 + (c - 'A' + 1);
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << titleToNumber(s);
    return 0;
}