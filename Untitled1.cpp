#include <stdio.h>
int main (){
	int a[10];
	printf("nhap vao 10 phan tu:");
	for(int i=0;i<10;i++){
		scanf("%d ",&a[i]);
	}
	for(int i=1;i<10;i++){
		printf("%d ",a[i]);
	}
}