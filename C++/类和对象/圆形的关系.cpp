#include <iosteam>
using namespace std;

class Cirele {
	public:
		void SetR(int r) {
			m_R = r;
		}
		int GetR() {
			return m_R;
		}
		void SetCenter(Point center) {
			m_Center = center;
		}
		Point GetCenter() {
			return m_Center;
		}
	private:
		int m_R;
		Point m_Center;


};

void IsInCircle(Circle &c, Point &p) {
	c
}

class Point {
	public:
		void Setx(int x) {
			m_X = x;

		}
		int getX() {
			return m_X;
		}
		void Sety(int y) {
			m_Y = y;

		}
		int getY() {
			return m_Y;
		}
	private:
		int m_X;
		int m_y;
};

int main() {

}