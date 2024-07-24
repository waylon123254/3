#include <iostream>
#include <string>
using namespace std;

class Cube {
	public:
		void setL(int l) {
			m_l = l;

		}
		int getL() {
			return m_l;

		}
		void setW(int w) {
			m_w = w;

		}
		int getH() {
			return m_l;

		}
		void setH(int h) {
			m_h = h;

		}
		int getW() {
			return m_w;
		}
		int CalculateS() {
			return 2 * m_l * m_w + 2 * m_h * m_w + 2 * m_l * m_h;

		}
		int CalculateV() {
			return m_l * m_w * m_h;
		}
	private:
		int m_l;
		int m_w;
		int m_h;


};

int main() {
	Cube c;
	c.setH(10);
	c.setL(10);
	c.setW(10);
	cout <<	c.CalculateS() << "	"
	     << c.CalculateV() << endl;
	return 0;
}


