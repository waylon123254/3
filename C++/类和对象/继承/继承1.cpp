#include<iostream>
using namespace std;
//class Java {
//		int YourVar;
//	public:
//
//		void header() {
//			cout << "首页，公开课，登录，注册" << endl;
//		}
//		void footer() {
//			cout << "帮助中心，交流盒子，站内消息" << endl;
//		}
//		void left() {
//			cout << "Java，Python，c语言" << endl;
//		}
//		void content() {
//			cout << "C++视频" << endl;
//		}
//};
//公共页面
class BasePage {
	int YourVar;
public:
	
			void header() {
				cout << "首页，公开课，登录，注册" << endl;
			}
			void footer() {
				cout << "帮助中心，交流盒子，站内消息" << endl;
			}
			void left() {
				cout << "Java，Python，c语言" << endl;
			}
			void content() {
				cout << "C++视频" << endl;
			}
};
class Java:public BasePage
{
public:
	void content()
	{
		cout<<"java学科视频\n"<<endl;
	}
};
class Python:public BasePage
{
public:
	void content()
	{
		cout<<"Python学科视频\n"<<endl;
	}
};

void test() {
	cout << "java下载视频页面如下\n" << endl;
	Java ja;
	ja.content();
	ja.footer();
	ja.header();
	ja.left();
	cout << "Pyhton下载视频页面如下：\n" << endl;
	Python pa;
	pa.content();
	pa.footer();
	pa.header();
	pa.left();
}
int main() {
	test();
	return 0;
}
