#include <iostream>
using namespace std;

template <typename X>
void call_it(X x) {
	x();
}

void sayhi() {
	cout << "Hi" << endl;
}

int main() {
	call_it(sayhi);
}