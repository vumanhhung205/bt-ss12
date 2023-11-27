#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n){
	int i;
	if ( n < 2) {
		return false;
	} else 
	    if (n==2 || n==5 || n==7 || n==3 || n==11) {
	    	return true;
		} else 
		    if (n%2 == 0 || n%3 == 0 ) {
		    	return false;
			}
    i=-1;
    while (i < sqrt(n)) {
    	i += 6;
    	if ( n%i == 0 || n%(i+2) == 0) {
    		return false;
		}
	}
    return true;   	
}
int main() {
	int n,m;
	int i;
	int count1,count2;
	printf("nhap mang 1 ");
	scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("nhap mang 2 ");
	scanf("%d", &m);
	int b[m];
	for (i=0;i<m;i++) {
		printf("b[%d]=",i);
		scanf("%d", &b[i]);
	}
	printf("cac so nguyen to trong mang 1 la ");
	for (i=0;i<n;i++) {
		if (prime(a[i])) {
			printf("%d " ,a[i]);
			count1++;
		}		
	}
	printf("\n cac so nguyen to trong mang 2 la ");
	for (i=0;i<m;i++) {
		if (prime(b[i])) {
			printf("%d " ,b[i]);
			count2++;
		}		
	}
	if (count1 > count2) {
		printf("\n mang co nhieu snt hon la ");
		for (int i=0; i<n; i++) 
	 		printf("%d ", a[i]);
	} else {
		printf("\n mang co nhieu snt hon la ");
		for (int i=0; i<m; i++) 
	 		printf("%d ", b[i]);
	}
}
