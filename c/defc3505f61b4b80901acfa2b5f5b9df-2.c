#include <stdio.h>

// 找出数组中只出现一次的两个数字
void findSingleNumbers(int arr[], int size, int *num1, int *num2) {
	int xorResult = 0;

	// 对数组中所有元素进行异或运算
	for (int i = 0; i < size; i++) {
		xorResult ^= arr[i];
	}


	if (xorResult == 0) {
		printf("请输入带有重复的\n");
		return;
	}

	int bitPos = 0;
	while ((xorResult & 1) == 0) {
		xorResult >>= 1;
		bitPos++;
	}

	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++) {
		if ((arr[i] >> bitPos) & 1) {
			*num1 ^= arr[i];
		} else {
			*num2 ^= arr[i];
		}
	}
}

int main() {
	int size;
	printf("请输入个数: ");
	scanf("%d", &size);

	int arr[size];
	printf("请输入数组元素:\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int num1, num2;
	findSingleNumbers(arr, size, &num1, &num2);

	if (num1 == 0 && num2 == 0) {
		return 0;
	}

	printf("The two single numbers are %d and %d.\n", num1, num2);

	return 0;
}