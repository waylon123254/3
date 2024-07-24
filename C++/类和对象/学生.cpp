#include <iostream>
using namespace std;

class Point {
	public:
		void SetPoint(int x, int y) {
			xPos = x;
			yPos = y;
		}
		void PrintPoint() {
			cout << xPos << endl;
			cout << yPos << endl;
		}
	private:
		int xPos, yPos;

};

int main() {
	Point M;
	M.SetPoint(3, 6);
	M.PrintPoint();
	return 0;
}