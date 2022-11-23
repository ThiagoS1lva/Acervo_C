 #include <stdio.h>

int main(int argc, char** argv) {
	
	int numero, cont, x = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	for (cont = 2; cont <= numero /2 ; cont ++) {
		if (numero%cont==0) {
			x++;
			break;
		}
	}
	if (x == 0) {
		printf("Numero primo\n");
	}
	else {
		printf("Numero nao primo\n");
	}
	return 0;
}

