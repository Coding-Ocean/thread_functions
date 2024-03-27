#include<iostream>
#include<thread>
using namespace std;

class functor {
public:
	void operator()(int n) {
		while (n-- > 0)cout << n << endl;
	}
};

int main() {
	//thread t( (functor()) );
	
	functor f;
	thread t2(f,10);

	//t.join();
	t2.join();
}