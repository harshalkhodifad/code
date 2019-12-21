#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> v;
    int a,b,c;
    char ch;
    stringstream s(str);
    s >> a >> ch >> b >> ch >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}