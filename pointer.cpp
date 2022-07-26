#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int start = time(NULL);
	int arr[10] = { 5,10,7,15,22,1,37,9,3,17 };
	int* ptr1;
	int* ptr2;
	int* ptr3;
	int* ptr4;
	int* ptr5;
	int* ptr6;
	int* ptr7;
	int* ptr8;
	int* ptr9;
	int* ptr10;
	ptr1 = &arr[0];
	ptr2 = &arr[1];
	ptr3 = &arr[2];
	ptr4 = &arr[3];
	ptr5 = &arr[4];
	ptr6 = &arr[5];
	ptr7 = &arr[6];
	ptr8 = &arr[7];
	ptr9 = &arr[8];
	ptr10 = &arr[9];
	for (int i = 0; i < 100000; i++) {
		for (int j = 0; j < 1; j++) {
			cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << " " << *ptr4 << " " << *ptr5 << " " << *ptr6 << " " << *ptr7 << " " << *ptr8 << " " << *ptr9 << " " << *ptr10 << endl;
			*ptr1 = *ptr1 + 10;
			*ptr2 = *ptr2 + 10;
			*ptr3 = *ptr3 + 10;
			*ptr4 = *ptr4 + 10;
			*ptr5 = *ptr5 + 10;
			*ptr6 = *ptr6 + 10;
			*ptr7 = *ptr7 + 10;
			*ptr8 = *ptr8 + 10;
			*ptr9 = *ptr9 + 10;
			*ptr10 = *ptr10 + 10;
		}
		
	}
	int end = time(NULL);
	cout << "That took " << end - start << "seconds" << endl;
	return 0;
}