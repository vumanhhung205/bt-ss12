#include<stdio.h>
#include<stdbool.h>
bool symmetry(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
	int arr1[] = { 1 , 2 , 3 , 2 , 1 };
	int n = sizeof arr1 /sizeof(int);
	char arr2[] = {'a', 'n', 'n', 'a', 'a'};
	int m = sizeof arr2 /sizeof(char);

	if ( symmetry(arr1 , n)  ) {
		printf("arr1 la mang doi xung\n");
	} else printf("arr1 khong phai mang doi xung\n");
	
	if ( symmetry(arr2 , m)  ) {
		printf("arr2 la mang doi xung\n");
	} else printf("arr2 khong phai mang doi xung\n");
}
