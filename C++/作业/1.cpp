#include <iostream>
using namespace std;

//int main() {
//	int x, y;
//	cin >> x;
//	if (x < 1)
//		y = x * (x - 1);
//	else(x > 10);
//	y = 3 * x - 11;
//	y - 2 * x - 1;
//	cout << y << endl;
//	return 0;
//}

int main()
{
	int i=0,j;
	
	int n=5;
	
	for(i=0; i<5; i++) {
		
		for(j=n-1; j>i; j--) printf(" ");
		
		for(j=0; j<=i; j++) printf("*");
		
		printf("\n");
		
	}
}
