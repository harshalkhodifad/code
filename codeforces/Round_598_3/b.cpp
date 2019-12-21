#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int get_min(int *c, int start, int n) {
    for (int i=start;i<n;i++) {
        if (c[i]==0) {
            return i;
        }
    }
    return n;
}

int main() {
    int q;
    scanf("%d", &q);
    while(q-->0) {
        int n;
        scanf("%d", &n);
        int a[n];
        vector<int> b;
        int c[n];
        for (int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            c[i]=0;
        }
        int start = 0;
        int begin = 0;
        while((start = get_min(c, start, n)<n)) {
            b.push_back(start+1);
            for (int i=begin;i<n;i++) {
                if (start+1==a[i]) {
                    begin=i+1;
                } else {
                    b.push_back(a[i]);
                }
                c[i] = 1;
            }
        }
        cout<<b<<endl;
        

    }
    return 0;
}