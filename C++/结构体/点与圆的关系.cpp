//#include <iostream>




//#include <string>
//using namespace std;
//
//class Point {
//	public:
//		void set_x(int x) {
//			m_x = x;
//		}
//		int get_x() {
//
//			return m_x;
//		}
//		void set_y(int y) {
//			m_y = y;
//		}
//		int get_y() {
//
//			return m_y;
//		}
//
//	private:
//		int m_x;
//		int m_y;
//
//};
//
//class Circle {
//	public:
//				void set_x(int x) {
//			m_x = x;
//		}
//		int get_x() {
//
//			return m_x;
//		}
//	private:
//		int m_R;
//};
//
//int main() {
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
////閫氳繃缁撴瀯浣撳垱寤哄彉閲忕殑鏂瑰紡鏈変笁绉?
////1銆乻truct缁撴瀯浣撳悕 鍙橀噺鍚?
////2銆乻truct 缁撴瀯浣撳悕 鍙橀噺鍚?{鎴愬憳鍊?锛屾垚鍛樺�?锛?..}
////3銆佸畾涔夌粨鏋勪綋鏃堕『渚垮畾涔夊彉閲?
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//struct Student2
//{
//	string name;
//	int age;
//	int score;
//}s3;
//int main() {
//	//绗竴绉?
//	Student s1;
//	s1.name = "寮犱笁";
//	s1.age = 18;
//	s1.score = 99;
//	cout << "name=" << s1.name << "  age=" << s1.age << "  score=" << s1.score << endl;
//	//绗簩绉?
//	Student s2 = {"鐜嬩簩",18,97};
//	cout << "name=" << s2.name << "  age=" << s2.age << "  score=" << s2.score << endl;
//	//绗笁绉?
//	s3.name = "鐜嬩簩";
//	s3.age = 17;
//	s3.score = 78;
//	cout << "name=" << s3.name << "  age=" << s3.age << "  score=" << s3.score << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	struct Student stuArray[3] = {
//		{
//			"Zhang", 18, 100
//		},
//		{
//			"lisi", 17, 99
//		},
//		{
//			"wangwu", 16, 98
//		},
//	};
//	stuArray[2].name = "li";
//	for (int i = 0; i < 3; i++) {
//		cout << "濮撳悕锛? << stuArray[i].name << "	"
//		<< "骞撮緞锛? << stuArray[i].age << "		"
//		<< "鍒嗘暟锛? << stuArray[i].score << "		"
//		<< endl;
//	}
//}
#include <iostream>
#include <string>
using namespace std;
//结构体数组
//1、定义结构体
struct  student {
	string name;
	int age;
	int score;
};

int main() {
	//2、创建结构体数组
	struct student stuarr[3] = {
		{"张三", 18, 100},
		{"李四", 17, 90},
		{"王二", 16, 80}
	};
	//3、给结构体数组中的元素赋值
	stuarr[2].name = "李三";
	stuarr[2].age = 17;
	stuarr[2].score = 10;
	//4、遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名:" << stuarr[i].name << "\t年龄：" << stuarr[i].age << "\t分数:" << stuarr[i].score << endl;

	}
	system("pause");
	return 0;
}