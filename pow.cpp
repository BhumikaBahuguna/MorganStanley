#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
        long long N = n; 
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }
    double result = 1.0;
    while (N > 0) {
        if (N % 2 == 1) {
            result *= x;
        }
        x *= x;
        N /= 2;
    }
    return result;
    }
int main(){
    double x;
    int n;
    cin >> x >> n;
    cout << myPow(x, n) << endl;
    return 0;
}