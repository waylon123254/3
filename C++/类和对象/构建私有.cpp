#include <iostream>
#include <string>
using namespace std;

class Person {
	public:
		void SetName(string sname) {
			name = sname;
		}
		string GetName() {
			return name;
		}
		int GetAge() {
			age = 0;
			return age;

		}
	private:
		string name;
		int age;

};

int main() {
	Person p1;
	p1.SetName("ÂÀºê²©");
	cout << p1.GetName() << "	" << p1.GetAge() << endl;
}
