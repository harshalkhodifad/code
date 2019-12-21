#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

// struct par;

struct par {
    int x;
    par* y;
};

stringstream out;
auto func = [](auto x){return x*2;};

int main() {
    int n, q;
    cout << func(10.2) << endl;
    par p = {2,};
    par pp = {4,};
    p.y = &pp;
    // p.x = 1;
    cout << p.x << " " << p.y -> x <<endl;

    return 0;
}
