//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	int arr[10];
//	for(int i=0;i<=10;i++){
//	cin>>arr[i];
//	}
//	return 0;
//}

//#include<iostream>
//#include<string.h>
//using namespace std;
//void test1(){
//	string s1;
//	const char * str="Hello word";
//	string s2(str);
//	cout<<s2<<endl;
//	string s3(s2);
//	cout<<s3<<endl;
//}
//int main(){
//test1();
//return 0;
//}
//赋值操作
#include<iostream>
#include<string.h>
using namespace std;

void test2(){
 string str1;
 str1="Hlleo world";
 cout<<str1<<endl;
 string str2;
 cout<<str2<<endl;
 string str3;
 str3="2";
 cout<<str3<<endl;
 string str4;
 str4.assign("Hello",4);
 cout<<str4<<endl;
}
int main(){
	
	test2();
	return 0;
}
