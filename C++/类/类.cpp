#include<iostream>
using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;
	double getVolume(void){
		return length*height*breadth;
	}
};

int main(){
	Box Box1;
	Box1.length=1;
	Box1.breadth=2;
	Box1.height=3;
	double volume=0.0;
	volume=Box1.getVolume();
	cout<<"Box1:"<<volume<<endl;
	
	return 0;
}
