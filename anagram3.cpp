#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s,string t){
    if(s.size()!=t.size()) return false;
    vector<int>freq(26,0);
    for(char c:s)
        freq[c-'a']++;
    for(char c:t){
        freq[c-'a']--;
        if(freq[c-'a']<0) return false;
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