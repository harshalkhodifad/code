#include <iostream>
using namespace std;


template <typename T>
struct NNode {
    T val;
    NNode *next;
};

template <typename T>
class Queue
{
    NNode<T>* front;
    NNode<T>* end;
public:
    // void Queue(int s) {
    //     size = s;
    //     arr = new T[size];
    // }
    void print() {
        NNode<T>* a = front;
        while (a!=NULL) {
            cout << a->val << " ";
            a = a->next;
        }
    }
    
    void add(T x) {
        if (front) {
            end->next = new NNode<T>{x,NULL};
						end = end->next;
        } else {
            front = new NNode<T>{x, NULL};
            end = front;
        }
    }
};


int main() {
    string s;
    cin >> s;
	Queue<int> q{};
	q.add(1);
	q.add(2);
	q.print();
	return 0;
}