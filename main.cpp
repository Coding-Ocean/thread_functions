#include<iostream>
#include<thread>
using namespace std;

void func(int n) {
	while (n-- > 0) { cout << n << endl; }
}

int main() {
	thread t(func, 10);
	t.join();
}