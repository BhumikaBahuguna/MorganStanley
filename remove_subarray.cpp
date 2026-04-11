#include<bits/stdc++.h>
using namespace std;
int findlength(vector<int>&arr){
    int n=arr.size();
    int left=0;
    while(left+1<n &&arr[left]<=arr[left+1]){
        left++;
    }
    if(left==n-1) return 0;
    int right=n-1;
    while(right>0 && arr[right-1]<=arr[right]){
        right--;
    }
    int ans = min(n - left - 1, right);
    int i=0,j=right;
    while(i<=left && j<n){
        if(arr[i]<=arr[j]){
            ans=min(ans,j-i-1);
            i++;
        }else{
            j++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = findlength(arr);
    cout << "Length of the shortest subarray to remove: " << result << endl;
    return 0;
}