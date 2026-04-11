#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s,string t){
    if(s.size()!=t.size()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
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