#include<iostream>
#include<thread>
using namespace std;

int main() {
	auto func = [](int n) {
		while (n-- > 0)
			cout << n << endl;
	};
	thread t(func, 10);
	t.join();
}