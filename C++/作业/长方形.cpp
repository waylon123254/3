#include <iostream>
using namespace std;

//Rctangle    ：长方形
class Rectangle {
	private:
		double length;
		double width;
		double heigth;
	public:
		double showVolume() {
			double Volume = length * width * heigth;//长方体体积=长*宽*高
			return Volume;
		}
		void setValue() {
			cin >> length >> width >> heigth;
		}
};

int main() {
	Rectangle R[3];
	int i;
	for (i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "个长方体的长宽高" << endl;;
		R[i].setValue();
	}
	for (i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "个长方体的体积为：";
		cout << R[i].showVolume() << endl;;
	}
	return 0;
}