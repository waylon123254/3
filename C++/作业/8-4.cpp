#include <iostream>
using namespace std;

class Max {
	public:
		void set_value();
		void max_value();
		void show_value();
	private:
		int a[10];
		int max;
};

void Max::set_value() {
	int i;
	for (i = 0; i < 10; i++)
		cin >> a[i];
}

void Max::max_value() {
	int i;
	max = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] > max)
			max = a[i];
	}
}

void Max::show_value() {
	cout << "max=" << max;
}

int main() {
	Max a;
	a.set_value();
	a.max_value();
	a.show_value();
	return 0;

}