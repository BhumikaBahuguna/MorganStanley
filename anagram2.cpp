#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s,string t){
    if(s.size()!=t.size()) return false;
    unordered_map<char,int>freq;
    for(char c:s){
        freq[c]++;
    }
    for(char c:t){
        if(freq[c]==0) return false;
        freq[c]--;
    }
    return true;
}
int main(){
    string s,t;
    cin >> s >> t;
    if(isanagram(s,t)){
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}