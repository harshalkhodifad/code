#include<iostream>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0) {
        string s;
        cin >> s;
        int first = -1;
        int last = -1;
        for (int i=0;i<s.size();++i) {
            if (s[i]=='1') {
                first = i;
                break;
            }
        }
        for (int i=s.size()-1;i>=0;--i) {
            if (s[i]=='1') {
                last = i;
                break;
            }
        }
        int count = 0;
        if (first!=-1 && last!=-1) {
            for (int i=first+1;i<last;++i) {
                if (s[i]!='1')  count++;
            }
        }
        
        cout << count << "\n";
    }
}