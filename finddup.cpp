#include<bits/stdc++.h>
using namespace std;
int findpulicate(vector<int>nums){
    int slow=nums[0];
    int fast=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int duplicate = findpulicate(nums);
    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}

