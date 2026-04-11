#include<bits/stdc++.h>
using namespace std;
int closestavg(vector<int>&arr){
    int n=arr.size();
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double mean=sum/n;
    int closest=arr[0];
    double mindiff=abs(arr[0]-mean);
    for(int i=1;i<n;i++){
        double diff=abs(arr[i]-mean);
        if(diff<mindiff){
            mindiff=diff;
            closest=arr[i];
        }
    }
    return closest;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = closestavg(arr);
    cout << "Element closest to the average: " << result << endl;
    return 0;
}