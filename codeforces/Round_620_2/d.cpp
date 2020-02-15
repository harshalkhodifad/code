#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[n], b[n];
        for (int i=0;i<n;++i){
            a[i] = -1;
            b[i]=-1;
        }

        int count = n;
        for (int i=0;i<n;++i) {
            if (s[i-1]=='<' && i==n-1) {
                a[i] = count--;
            } else if (s[i]=='>' && i!=n-1){
                a[i] = count--;
            }
        }

        for (int i=0;i<n;++i) {
            if (a[i]!=-1) {
                // goBack(i-1);
                int j = i-1;
                while(j>=0 && a[j]==-1) {
                    a[j--] = count--;
                }
            }
        }
        for (int i=0;i<n;++i) {  
            if (a[i]==-1)   a[i] = count--; 
            cout << a[i] << " ";
        }

        for (int i=0;i<n;++i)   a[i]=-1;
        cout << "\n";

        count = 1;
        for (int i=0;i<n;++i) {
            if (s[i-1]=='>' && i==n-1) {
                a[i] = count++;
            } else if (s[i]=='<' && i!=n-1){
                a[i] = count++;
            }
        }

        for (int i=0;i<n;++i) {
            if (a[i]!=-1) {
                // goBack(i-1);
                int j = i-1;
                while(j>=0 && a[j]==-1) {
                    a[j--] = count++;
                }
            }
        }
        for (int i=0;i<n;++i) {  
            if (a[i]==-1)   a[i] = count++; 
            cout << a[i] << " ";
        }
        cout << "\n";

    }
}

