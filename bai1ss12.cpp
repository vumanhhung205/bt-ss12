#include <stdio.h>
void phep_tinh(int a, int b, int c){
	printf ("cap so thu nhat\n");
	printf ("%d+%d=%d\n",a ,b ,a+b);
	if (a>b){
			printf ("%d-%d=%d\n",a ,b ,a-b);	
	}else{
		printf ("%d-%d=%d\n",b ,a ,b-a);
	}
	printf ("cap so thu hai\n");
	printf ("%d+%d=%d\n",a ,c ,a+c);
	if (a>c){
			printf ("%d-%d=%d\n",a ,c ,a-c);	
	}else{
		printf ("%d-%d=%d\n",c ,a ,c-a);
	}printf ("cap so thu ba\n");
	printf ("%d+%d=%d\n",c ,b ,c+b);
	if (c>b){
			printf ("%d-%d=%d\n",c ,b ,c-b);	
	}else{
		printf ("%d-%d=%d\n",b ,c ,b-c);
	}
}
int main(){
	int a, b, c;
	printf ("nhap 3 so nguyen a ,b ,c:");
	scanf("%d %d %d",&a, &b, &c);
	phep_tinh(a,b,c);
	return 0;	
}
