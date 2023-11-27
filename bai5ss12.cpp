#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <stdlib.h>
bool prime(int n){
	int i;
	if ( n < 2) {
		return false;
	} else if(n==2||n==3){
		return true;
	}else
	if(n>3){
		for (i=2;i < sqrt(n);i++) {
    	if ( n%i == 0 ) {
    		return false;
		}else {
			return true;
		}
		}
	 }
    
       	
}
bool phu(){
	int n;
	for (int i=n-1;i>=0;i--){
		for (int j=0;i<m;j++){
			return true;
		}
	}
}
int main() {
    int n,m;
    int i,j,f=0;
    int choice;
    int a[100][100];
    do {
        printf("1.nhap mang\n");
        printf("2.in mang theo ma tran\n");
        printf("3.in ra cac phan tu o goc\n");
        printf("4.in ra cac phan tu tren duong bien\n");
        printf("5.in ra cac phan tu tren duong cheo chinh va phu\n");
        printf("6.in ra cac phan tu la so nguyen to\n");
        printf("7.thoat\n");
        printf("nhap lua chon ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("nhap so hang ");
            scanf("%d",&n);
            printf("nhap so cot ");
            scanf("%d",&m);
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    printf("a[%d][%d]=",i,j);
                    scanf("%d",&a[i][j]);
                }
            }
            break;
        case 2:
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    printf("%d  ",a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
             for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                	if(i==0&&j==0||i==n-1&&j==0||i==n-1&&j==m-1||i==0&&j==m-1){
                		printf("%d  ",a[i][j]);
					}else{
						printf("%d  ",f);
					}
                }
                printf("\n");
            }
            break;
        case 4:
             for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                	if(j==0||i==0||i==n-1||j==m-1){
                		printf("%d  ",a[i][j]);
					}else{
						printf("%d  ",f);
					}
                }
                printf("\n");
            }
            break;
        case 5:
        	if(m==n||phu()){
             for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                	if(i==j){
                		printf("%d  ",a[i][j]);
					}else{
						printf("%d  ",f);
					}
                }
                printf("\n");
        	 }
        }else {
        	printf("mang khong co duong cheo\n");
		}
            break;
        case 6:
            for (i=0;i<n;i++) {
                for (j=0;j<m;j++) {
                    if (prime(a[i][j])){
						printf("%d  ",a[i][j]);  
					}else {
                		printf("%d  ",f);
					}
				}
            	printf("\n");
			}
            break;
        case 7:
       exit(0);
            break;
        default:
            printf("khong hop le\n");
            break;
        }
    }   while (choice != 7);

}
