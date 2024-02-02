#include<iostream>
#include<string>
using namespace std;

class Calculator {

	public:
		int GetRsult(string oper) {
			if (oper == "+") {

				return m_Num1 + m_Num2;

			} else if (oper == "-")

			{
				return m_Num1 - m_Num2;
			} else if (oper == "*") {
				return m_Num1 * m_Num2;
				//TODO
			}
		}
		int m_Num1, m_Num2;
};

class AbstractCalculator: public Calculator {
	public:
		int m_Num1, m_Num2;
		virtual int GetRult() {
			return 0;
		}
};

class AddCalculator: public AbstractCalculator {
	public:

		int GetRult() {
			return m_Num1 + m_Num2;
		}
};

class SubCalculator: public AbstractCalculator {
	public:

		int GetRult() {
			return m_Num1 - m_Num2;
		}
};

class MulCalculator: public AbstractCalculator {
	public:

		int GetRult() {
			return m_Num1 * m_Num2;
		}
};

void test2()
{
	AbstractCalculator * abc= new AbstractCalculator;
	abc->m_Num1=10;
	abc->m_Num2=20;
	cout<<abc->GetRult()<<endl;

}

void test() {
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.GetRsult("+") << endl;
	test2();

}
int main() {
	test();
	return 0;

}
