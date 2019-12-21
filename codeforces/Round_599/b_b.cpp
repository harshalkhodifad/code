#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

char temp;
char out[10000000];
int ind = 0;
#define skip scanf("%c", &temp);

int main() {
    int k;
    scanf("%d", &k);
    while(k-->0) {
        int n;
        scanf("%d", &n);skip;
        char a[n], b[n];
        bool possible = true;
        int cnt[26];
        int aa = (int)'a';
        for (int i=0;i<26;i++)  cnt[i]=0;
        for (int i=0;i<n;i++) {
            scanf("%c", &a[i]);
            cnt[(int)a[i]-aa]++;
        }
        skip;
        for (int i=0;i<n;i++) {
            scanf("%c", &b[i]);
            cnt[(int)b[i]-aa]++;
        }
        for (int i=0;i<26;i++) {
            if (cnt[i]%2!=0) {
                possible=false;
                break;
            }
        }
        if (possible) {
            int count = 0;
            char temp[10000];
            int local_index = 0;
            for (int i=0;i<n;i++) {
                // check
                if (a[i]==b[i]) continue;
                //swap
                for (int j=i+1;j<n;j++) {
                    if (b[i]==b[j]) {
                        count+=1;
                        local_index+=sprintf(&temp[local_index], "%d %d\n", i+1, j+1);
                        b[j]=a[i];
                        a[i]=b[i];
                        break;
                    }
                }
                if (a[i]==b[i]) continue;
                for (int j=i+1;j<n;j++) {
                    if (b[i]==a[j]) {
                        count+=2;
                        local_index+=sprintf(&temp[local_index], "%d %d\n", j+1, j+1);
                        local_index+=sprintf(&temp[local_index], "%d %d\n", i+1, j+1);
                        a[j]=b[j];
                        b[j]=a[i];
                        a[i]=b[i];
                        break;
                    }
                }
            }
            ind+=sprintf(&out[ind], "Yes\n%d\n%s", count, temp);
        }
        else {
            ind+=sprintf(&out[ind], "No\n");
        }
    }
    printf("%s", out);
    return 0;
}