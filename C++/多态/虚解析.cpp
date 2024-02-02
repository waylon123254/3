#include <iostream>
using namespace std;
class Animal {
	public:
		virtual void speak() = 0;
		Animal()
		{
			cout <<  "父类在说话" << endl;
			
		}
		~Animal()
		{
			cout << "父类析构函数在说话" << endl;
		}



};

class Cat: public Animal {
	public:
		virtual	void speak() {
			cout << *m_Name << "小米在说话" << endl;
		}
		Cat(string name) {
			m_Name =	new string(name);
		}
		string *m_Name;
		~Cat() {
			if(m_Name !=NULL){
				cout <<  "Cat析构函数在说话" << endl;
				delete m_Name;
				m_Name=NULL;
			}
		}
};
void test() {
	Animal * animal = new Cat("Tom");
	animal->speak();

	delete animal;

}
int main() {
	test();
	return 0;
}

