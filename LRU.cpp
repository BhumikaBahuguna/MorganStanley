#include<bits/stdc++.h>
using namespace std;
class LRUCache {
private:
    int cap;
    list<pair<int, int>> dll;
    unordered_map<int, list<pair<int,int>>::iterator> mp;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }    
    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        auto it = mp[key];
        int value = it->second;
        dll.erase(it);
        dll.push_front({key, value});
        mp[key] = dll.begin();

        return value;
    }
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dll.erase(mp[key]);
        }
        else if (dll.size() == cap) {
            auto last = dll.back();
            mp.erase(last.first);
            dll.pop_back();
        }
        dll.push_front({key, value});
        mp[key] = dll.begin();
    }
};
int main(){
    int capacity, n;
    cin >> capacity >> n;
    LRUCache cache(capacity);
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "put") {
            int key, value;
            cin >> key >> value;
            cache.put(key, value);
        } else if (op == "get") {
            int key;
            cin >> key;
            cout << cache.get(key) << endl;
        }
    }
    return 0;
}