#include <stdio.h>
#include <math.h>
	float tamgiac(float a,float b,float c){
		return (a + b > c && a + c > b && b + c > a);
	}
	float loaitamgiac (float a,float b,float c) {
	    if (a==b&&a==c) return 1;
	    if (a==b||a==c||b==c) {
	    	if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 3;
	    	return 2;
		}
	    if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 4;
	    return 5;
	}
	float dientich (float a, float b, float c) {
		float p=(a+b+c)/2.0;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	
	int main (){	
	
        float a,b,c;
        	
        printf("nhap vao 3 canh cua tam giac: ");
	scanf("%f%f%f",&a,&b,&c);
if( !tamgiac(a,b,c)) {
	printf("khong ton tai tam giac");
	return 1;
		}
		int loai= loaitamgiac(a,b,c);
	switch (loai){
		case 1:
printf("tam giac deu");
break;
case 2:
printf("tam giac can");
	break;
	case 3:
	printf("tam giac vuong can");
	break;
	case 4:
	printf("tam giac vuong");
		break;
case 5:
printf("tam giac thuong");
break;
	}
		printf("Chu vi tam giac la: %.2f\n",a+b+c);
		printf("Dien tich tam giac la:%.2f", dientich(a,b,c));
			
}

