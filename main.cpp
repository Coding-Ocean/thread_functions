#include<iostream>
#include<thread>
using namespace std;

class Hoge {
public:
	void func(int n){
		while (n-- > 0)
			cout << n << endl;
	}
};

int main() {
	Hoge h;
	thread t(&Hoge::func, &h, 10);
	
	//�����_�����g���Ƃ�
	//thread t( [&h]{ h.func(10); } );
	
	t.join();
}