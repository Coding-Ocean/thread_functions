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
	//�C���X�^���X��p�ӂ��Ȃ��ꍇ
	thread t( (functor()) );
	
	//�C���X�^���X��p�ӂ���ꍇ
	//functor f;
	//thread t(f);

	t.join();
}