#include<iostream>
#include<thread>
using namespace std;

int main() {
	thread t([](int n) {
		while (n-- > 0)
			cout << n << endl;
		}, 10);
	t.join();
}