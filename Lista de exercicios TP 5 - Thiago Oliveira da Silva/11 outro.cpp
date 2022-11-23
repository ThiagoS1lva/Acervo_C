#include<stdio.h>
int n, x, p=0;
int main(){
	printf ("Digite um numero:\n");
	scanf("%d", &n);
	for (x=2; x<=n /2; x++){
		if (n%x==0){
			p++;
			break;	
			
		}
		
	}
	if (p != 0){
		printf("Este numero e primo\n");
}
	else {
		printf("Este numero nao e primo\n");
}
	return 0;
}
