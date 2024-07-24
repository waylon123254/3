#include <iostream>
using namespace std;

class Point {
	public:
		void SetPoint(int x, int y);
		void PrintPoint();
	private:
		int xPos, yPos;
};

void Point::SetPoint(int x, int y) {
	xPos = x;
	yPos = y;

}

void Point::PrintPoint() {
	cout << "x = " << xPos << endl;

	cout << "y = " << yPos << endl;


}

int main() {
	Point M; //用定义好的类创建一个对象 点M

	M.SetPoint(10, 20); //设置 M点 的x,y值

	M.PrintPoint(); //输出 M点 的信息


	return 0;


}