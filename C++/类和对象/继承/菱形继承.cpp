#include<iostream>
using namespace std;
class Animal {
	public:
		int m_age;
};
class Sheep : public Animal {



};
class Tuo: public  Animal {



};
class SheepTuo : public  Sheep, public Tuo {



};

void tesrt() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	cout << "st.Sheep::m_age=" << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age=" << st.Tuo::m_age << endl;
}
int main() {
	tesrt();
	return 0;
}
