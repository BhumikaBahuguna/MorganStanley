#include<bits/stdc++.h>
using namespace std;
vector<string> mapping ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void solve(int index, string& digit, string& curr, vector<string>&result){
    if(index==digit.size()){
        result.push_back(curr);
        return;
    }
    string letters=mapping[digit[index]-'0'];
    for(char c:letters){
        curr.push_back(c);
        solve(index+1,digit,curr,result);
        curr.pop_back();
    }
}
vector<string> lettercombinations(string digits){
    vector<string> result;
    if(digits.empty()) return result;
    string curr ="";
    solve(0,digits,curr,result);
    return result;
}
int main(){
    string digits;
    cin >> digits;
    vector<string> combinations = lettercombinations(digits);
    cout<<"{";
    for (const string& combo : combinations) {
        cout << combo << " ";
    }
    cout << "}" << endl;
    return 0;
}