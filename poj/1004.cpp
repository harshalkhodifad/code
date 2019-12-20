#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x,sum=0;
	for (int i=0;i<2;++i) {
		cin >> x;
		sum += x;
	}
	sum /=12;
	cout << setprecision(200) << sum;
	return 0;
}
