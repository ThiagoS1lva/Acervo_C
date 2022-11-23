#include<stdio.h>
int x, p=0, a;
float n;
int main(){
	printf ("Digite um numero:\n");
	scanf("%f", &n);
	for (x=2; x<=n / 2; x++){
//		a = n%x==0;
		printf("%d\n", x);
		printf("%f\n", n / 2);
		printf("%d\n", a);
//		if (a != 0){
//			p++;
//			break;	
			
//		}
		
	}
	if (p == 0){
		printf("Este numero e primo\n");
}
	else {
		printf("Este numero nao e primo\n");
}
	return 0;
}
