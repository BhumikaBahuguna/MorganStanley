#include<bits/stdc++.h>
using namespace std;
int findpeak(vector<int>nums){
    int l=0,r=nums.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(nums[mid]<nums[mid+1]){
            l=mid+1;
       }else{
        r=mid;
    }
}
return l;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int peakIndex = findpeak(nums);
    cout << "Peak element index: " << peakIndex << endl;
    return 0;
}