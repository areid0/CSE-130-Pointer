#include <stdio.h>
#include <time.h>


int main() {
	int start = time(NULL);
	int arr[10] = { 5,10,7,15,22,1,37,9,3,17};
	int *ptr;
	int x;
	ptr = &arr[10];
	for (int i = 0; i < 100000; i++) {
		for (int j = 0; j < 10; j++) {
		printf("%d ", arr[10]);
			*ptr + 100;
		}
		printf("\n");
	}
	int end = time(NULL);
	printf("That took %d seconds\n", end - start);
	return 0;
}

