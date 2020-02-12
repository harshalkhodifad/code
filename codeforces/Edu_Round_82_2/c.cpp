#include<iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;

pair<char, char> getBrothers(string &s, int i) {
    if (i==0) {
        return {s[i+1], s[i+1]};
    } else if (i==s.size()-1) {
        return {s[i-1], s[i-1]};
    } else {
        return {s[i-1], s[i+1]};
    }
}

void generateRest(string s) {
    string ans = s;
    unordered_set<char> ss = {};
    for (int i=0;i<26;++i) {
        ss.insert((char)((int)'a' + i));
    }

    for (char c:s) {
        ss.erase(c);
    }

    for (char c:ss) {
        ans.push_back(c);
    }

    cout << "YES\n";
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0) {
        string s;
        cin >> s;
        int n = s.size();
        string ans = "";
        if (n<2) {
            generateRest(ans);
            continue;
        }
        bool failed = false;
        unordered_map<char, unordered_set<char>> map{};
        for (int i=0;i<n;++i) {
            map[s[i]] = {};
        }
        char c = 'A';
        for (int i=0;i<n;++i) {
            auto [x, y] = getBrothers(s,i);
            map[s[i]].insert(x);
            map[s[i]].insert(y);
            // cout << s[i] <<" : ";
            // for (char cc:map[s[i]]) {
            //     cout << cc << " - ";
            // }
            // cout << endl;
            if (map[s[i]].size()>2) {
                failed = true;
                break;
            }
            if (map[s[i]].size()==1) {
                c = s[i];
            }
            if (c==s[i]) {
                if (map[s[i]].size()!=1) {
                    c = 'A';
                }
            }
        }
        if (c=='A') {
            failed = true;
        }
        if (failed) {
            cout << "NO\n";
        } else {
            ans.push_back(c);
            while(!map[c].empty()){
                auto sset = map[c];
                char ca = *sset.begin();
                map[ca].erase(c);
                // cout << c <<" : ";
                // for (char cc:map[c]) {
                //     cout << cc << " - ";
                // }
                // cout << endl;
                ans.push_back(ca);
                c = ca;
            }
            // cout << "Print: "<<ans << endl;
            generateRest(ans);
        }
    }
}

