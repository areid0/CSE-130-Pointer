#include <stdio.h>
#include <time.h>


int main() {
	int start = time(NULL);
	int arr[10] = { 5,10,7,15,22,1,37,9,3,17};
	for (int i = 0; i < 100000; i++) {
		for (int j = 0; j < 1; j++) {
		printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d ", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
		arr[0] = arr[0] + 10;
		arr[1] = arr[1] + 10;
		arr[2] = arr[2] + 10;
		arr[3] = arr[3] + 10;
		arr[4] = arr[4] + 10;
		arr[5] = arr[5] + 10;
		arr[6] = arr[6] + 10;
		arr[7] = arr[7] + 10;
		arr[8] = arr[8] + 10;
		arr[9] = arr[9] + 10;
		}
		printf("\n");
	}
	int end = time(NULL);
	printf("That took %d seconds\n", end - start);
	return 0;
}