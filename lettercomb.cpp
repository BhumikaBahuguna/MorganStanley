#include<bits/stdc++.h>
using namespace std;
vector<string> lettercombinations(string digits){
    if(digits.empty()) return {};
    vector<string> mapping ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>result={""};
    for(char d :digits){
        vector<string>temp;
        for(string s:result){
            for(char c:mapping[d-'0']){
                temp.push_back(s+c);
            }
        }
        result=temp;
    }
    return result;
}
int main(){
    string digits;
    cin >> digits;
    vector<string> combinations = lettercombinations(digits);
    cout<<"{";
    for (const string& combo : combinations) {
        cout << combo << "";
    }
    cout << "}" << endl;
    return 0;
}