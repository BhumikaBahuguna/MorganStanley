#include<bits/stdc++.h>
using namespace std;
int mincosttomove(vector<int>&position){
    int n=position.size();
    int ans=INT_MAX;
    for(int target :position){
        int cost=0;
        for(int p:position){
            if(abs(p-target)%2!=0)
                cost+=1;
        }
        ans=min(ans,cost);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> position(n);
    for (int i = 0; i < n; i++) {
        cin >> position[i];
    }
    int result = mincosttomove(position);
    cout << "Minimum cost to move: " << result << endl;
    return 0;
}