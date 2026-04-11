#include<bits/stdc++.h>
using namespace std;
int mincosttomove(vector<int>position){
    int even=0,odd=0;
    for(int p:position){
        if(p%2==0) even++;
        else odd++;
    }
    return min(even,odd);
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