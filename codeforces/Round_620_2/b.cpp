#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

bool check_palin(string s) {
    for (int i=0;i<s.size()/2;++i)
    {
        if (s[i]!=s[s.size()-1-i]) {
            return false;
        }
    }
    return true;
}

string reverse_s(string s) {
    string rev_s = "";
    int n = s.size();
    for (int i=0;i<n;++i) {
        rev_s.push_back(s[n-1-i]);
    }
    return rev_s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    string ans = "";
    string long_palin = "";
    int cur_len = 0;
    string a[n];
    vector<string> v{};
    unordered_set<string> s_set{};
    for (int i=0;i<n;++i) {
        cin >> a[i];
        s_set.insert(a[i]);
    }
    vector<string> ans_vec{};

    for (string s: a) {
        if (s_set.count(s)==0)  {
            continue;
        }
        // cout << s << endl;
        string ss = s;
        s_set.erase(ss);
        reverse(ss.begin(), ss.end());
        if (s_set.count(ss) > 0) {
            s_set.erase(ss);
            ans_vec.push_back(ss);
        } else {
            s_set.insert(ss);
        }
        // cout << s << endl;
    }
    string temp = "";
    for (string s: ans_vec) {
        temp += s;
    }
    ans += temp;


    for (string s: s_set) {
        if (check_palin(s)) {
            ans+=s;
            break;
        }
    }



    for (int i=temp.size()-1;i>=0;--i) {
        ans += temp[i];
    }

    cout << ans.size() << endl;
    cout << ans;
}

