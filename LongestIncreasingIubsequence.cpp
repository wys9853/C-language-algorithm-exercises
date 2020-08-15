#include<stdio.h>
int main() {
	int max = 0, count = 1;
	int b, c;
	int a[] = { 2,1,4,7,8,-1,20,-7,-3,-2,1,-2,5,6 };
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++) {
		b = a[i];
		for (int j = i + 1; j < n; j++) {
			if (b < a[j]) {
				b = a[j];
				count++;
			}
	
		}
		if (max < count) {
			max = count;
			c = i;
		}
		count = 1;
	}
	printf("%d ", a[c]);
	b = a[c];
	for (int i = c + 1; i < n; i++) {
		if (b < a[i]) {
			b = a[i];
			printf("%d ", b);
		}
		
	}
	return 0;
}

