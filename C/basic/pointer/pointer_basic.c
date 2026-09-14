#include <stdio.h>
int main() {
	int num = 0;
	int *pi = &num;

	printf("Address of num: %p Value: %d\n", (void *)&num, num);
	printf("Adress of pi: %p Value: %p\n", (void *)&pi, (void *)pi);

	return 0;

}

