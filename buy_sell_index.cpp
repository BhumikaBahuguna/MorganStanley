#include<bits/stdc++.h>
using namespace std;
pair<int,int>maxprofitdays(vector<int>prices){
    int n=prices.size();
    int minprice=prices[0];
    int minindex=0;
    int maxprofit=0;
    pair<int,int>ans={-1,-1};
    for(int i=1;i<n;i++){
        int profit=prices[i]-minprice;
        if(profit>maxprofit){
            maxprofit=profit;
            ans={minindex,i};
        }
        if(prices[i]<minprice){
            minprice=prices[i];
            minindex=i;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    pair<int,int> result = maxprofitdays(prices);
    if(result.first != -1) {
        cout << "Buy on day: " << result.first << ", Sell on day: " << result.second << endl;
    } else {
        cout << "No profitable days found." << endl;
    }
    return 0;
}