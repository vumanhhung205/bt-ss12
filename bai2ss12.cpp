#include <stdio.h>
void phep_tinh(int a, int b, int c){
	printf ("cap so thu nhat\n");
	printf ("%d*%d=%d\n",a ,b ,a*b);
	if (a>b){
		if(a%b==0){
			printf("%d/%d=%d", a, b,a/b);
		}else{
			printf("%d khong chia het cho %d",a,b);
		}	
	}else{
		if(b%a==0){
			printf("%d/%d=%d", b, a,b/a);
		}else{
			printf("%d khong chia het cho %d\n",b,a);
		}
	}	
	printf ("cap so thu hai\n");
	printf ("%d*%d=%d\n",a ,c ,a*c);
	if (a>c){
		if(a%c==0){
			printf("%d/%d=%d\n", a, c,a/c);
		}else{
			printf("%d khong chia het cho %d\n",a,c);
		}	
	}else{
		if(c%a==0){
			printf("%d/%d=%d", c, a,c/a);
		}else{
			printf("%d khong chia het cho %d",c,a);
		}
	}printf ("cap so thu ba\n");
	printf ("%d*%d=%d\n",c ,b ,c*b);
	if (c>b){
		if(c%b==0){
			printf("%d/%d=%d\n", c, b,c/b);
		}else{
			printf("%d khong chia het cho %d\n",c,b);
		}	
	}else{
		if(b%c==0){
			printf("%d/%d=%d", b, c,b/c);
		}else{
			printf("%d khong chia het cho %d\n",b,c);
	}
	}
}
int main () {
	int a, b, c;
	printf ("nhap 3 so nguyen a ,b ,c:");
	scanf("%d %d %d",&a, &b, &c);
	phep_tinh(a,b,c);
	return 0;	
}
