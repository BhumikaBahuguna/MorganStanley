#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        int profit = price - minPrice;
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
    }
int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    cout << maxProfit(prices) << endl;
    return 0;
}
