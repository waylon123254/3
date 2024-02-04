#include <iostream>
using namespace std;

class Time {
	public:
		void set_time();
		void show_time();
	private:
		int hour;
		int minute;
		int sec;

};
Time t;

int main() {
	t.set_time();
	t.show_time();
	return 0;
}

void Time::set_time() {
	cin >> hour >> minute >> sec;
}

void Time::show_time() {
	cout << hour << ":" << minute << ":" << sec << endl;
}
