//#include <iostream>
//using namespace std;
//class Base {         // 抽象类Base的声明
//	public:
//		virtual void show() = 0;      // 纯虚函数成员show
//};
//class Child0 : public Base {   // 类Base的公有派生类Child0的声明
//	public:
//		void show()    {
//			cout << "Child0::show()" << endl;    // 虚成员函数show
//		}
//};
//class Child1 : public Child0 { // 类Child0的公有派生类Child1的声明
//	public:
//		void show()    {
//			cout << "Child1::show()" << endl;    // 虚成员函数show
//		}
//};
//void CallShow(Base *pBase) {   // 一般函数，参数为基类指针
//	pBase->show();
//}
//int main() {
//	Base *pBase;             // 声明Base类的指针
//	Child0 ch0;                 // 声明Child0类的对象
//	Child1 ch1;                 // 声明Child1类的对象
//	pBase = &ch0;           // 将Child0类对象ch0的地址赋值给Base类指针pBase
//	CallShow(pBase);
//	pBase = &ch1;           // 将Child1类对象ch1的地址赋值给Base类指针pBase
//	CallShow(pBase);
//	return 0;
//}
/*电脑案例*/
//#include <iostream>
//using namespace std;
//class Cpu {
//public:
//	virtual void Calculate() = 0;
//};
//
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void Storage() = 0;
//};
//
//class Computer {
//public:
//	Computer(Cpu *cpu, VideoCard *ve, Memory *me) {
//		M_cpu = cpu;
//		M_vc = ve;
//		memory = me;
//	}
//	void Work()
//	{
//		M_cpu->Calculate();
//		M_vc->display();
//		memory->Storage();
//		
//	}
//private:
//	Cpu * M_cpu;
//	VideoCard *M_vc;
//	Memory *memory;
//};
//
//class InterCpu:public Cpu
//{
//	
//};
//int main() {
//	
//	
//}
//
//#include <iostream>
//using namespace std;
//class AbstractDrink {
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//	void makeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee: public AbstractDrink {
//public:
//	virtual void Boil() {
//		cout << "煮水\n" << endl;
//	}
//	virtual void Brew() {
//		cout << "倒入杯中\n" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "冲泡水中\n" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "加入糖\n" << endl;
//	}
//};
//
//class Tea: public AbstractDrink {
//public:
//	virtual void Boil() {
//		cout << "煮水\n" << endl;
//	}
//	virtual void Brew() {
//		cout << "将茶叶倒入杯中\n" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "冲泡水\n" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "加入茶叶\n" << endl;
//	}
//};
//
//void test() {
//	DoWork(new Coffee);
//}
//
//void DoWork(AbstractDrink * abs) {
//	abs->makeDrink();
//	delete abs;
//}
//int main() {
//	test();
//	return 0;
//}
