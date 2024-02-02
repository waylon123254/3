#include <iostream>
using namespace std;
class AbstractDrink {
	public:
		virtual void Boil() = 0;
		virtual void Brew() = 0;
		virtual void PourInCup() = 0;
		virtual void PutSomething() = 0;
		void makeDrink() {
			Boil();
			Brew();
			PourInCup();
			PutSomething();
		}
};

class Coffee: public AbstractDrink {
	public:
		virtual void Boil() {
			cout << "煮水\n" << endl;
		}
		virtual void Brew() {
			cout << "倒入杯中\n" << endl;
		}
		virtual void PourInCup() {
			cout << "冲泡水中\n" << endl;
		}
		virtual void PutSomething() {
			cout << "加入糖\n" << endl;
		}
};

class Tea: public AbstractDrink {
	public:
		virtual void Boil() {
			cout << "煮水\n" << endl;
		}
		virtual void Brew() {
			cout << "将茶叶倒入杯中\n" << endl;
		}
		virtual void PourInCup() {
			cout << "冲泡水\n" << endl;
		}
		virtual void PutSomething() {
			cout << "加入茶叶\n" << endl;
		}
};

void test() {
	DoWork(new Coffee);
}

void DoWork(AbstractDrink * abs) {
	abs->makeDrink();
	delete abs;
}
int main() {
	test();
	return 0;
}
