#include<iostream>
using namespace std;
class Base {
		int YourVar;
	public:
		int m_a;
	protected:
		int m_b;
	private:
		int m_c;
};
class Son: public Base {

	public:
		int m_d;
};
void test() {
	cout << sizeof(Son) << endl;
}
int main() {
	test();
	return 0;
}
