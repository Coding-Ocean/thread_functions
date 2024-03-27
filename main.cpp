#include<iostream>
#include<thread>
using namespace std;

class functor {
public:
	void operator()() {
		int n = 10;
		while (n-- > 0)cout << n << endl;
	}
};

int main() {
	//インスタンスを用意しない場合
	thread t( (functor()) );
	
	//インスタンスを用意する場合
	//functor f;
	//thread t(f);

	t.join();
}