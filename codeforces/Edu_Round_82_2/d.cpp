#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<cmath> // log2
#include<climits>

using namespace std;
int divisions = 0;

bool consumeCounts(unordered_map<int, int> &map, int count) {
    bool success = false;
    for (int i=count+1;i<32;++i) {
        if (map[i]>0) {
            map[i]--;
            success = true;
            for (int j=i-1;j>=count;--j) {
                divisions++;
                map[j]++;
            }
            // cout << "\nBroke: " << i << endl;
            break;
        }
    }
    // cout << "\nConsumeCounts: " << count << "divisions: " << divisions << endl;
    return success;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<long long, int> log_map{};
    long long num = 1;
    for (int i=0;i<32;++i) {
        log_map[num] = i;
        num *= 2;
    }
    int t;
    cin >> t;
    while(t-->0) {
        divisions = 0;
        long long n,m;
        cin >> n >> m;
        long long x;
        unordered_map<int, int> map{};
        for (int i=0;i<32;++i) map[i] = 0;
        for (int i=0;i<m;++i) {
            cin >> x;
            map[log_map[x]]++;
        }
        int count = 0;
        bool success = true;
        int a[32];
        for (int i=0;i<32;++i)  a[i]=0;
        while(n!=0){
            x = n%2;
            n /= 2;
            a[count] = x;
            ++count;
        }
        for (int i=0;i<31;++i) {
            // cout << a[i] << " ";
            if (map[i]>0) {
                if (a[i]==1) {
                    map[i]--;
                    a[i] = 0;
                }
            }
        }
        // cout << endl;
        for (int i=0;i<31;++i) {
            // cout << a[i] << " ";
            if (a[i]) {
                if (map[i]==0) {
                    success = consumeCounts(map, i);
                    if (!success) {
                        break;
                    }
                } else {
                    map[i]--;
                }
            }
            map[i+1] += map[i]/2;
            map[i] = map[i] - (map[i]/2)*2;
        }
        if (!success) {
            cout << "-1\n";
            continue; 
        }
        cout << divisions << "\n";
    }
}

