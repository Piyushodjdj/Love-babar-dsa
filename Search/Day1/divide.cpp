#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend, int divisor) {
    int s = 0;
    int e = dividend;
    int ans = 0;
    while (s <= e) 
    {
        int mid = s + (e - s) / 2;
        
        if (mid * divisor == dividend) {
            return mid;
        }

        if (mid * divisor > dividend) {
            e = mid - 1;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }

    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
        return ans;
    } else {
        return -ans;  // Corrected this line
    }
}

int main() {
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);

    cout << ans;

    return 0;
}
