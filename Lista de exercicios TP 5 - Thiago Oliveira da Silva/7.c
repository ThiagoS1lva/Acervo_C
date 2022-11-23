#include <stdio.h>

int main(int argc, char** argv) {
	int brasil = 5000000, japao = 7000000, tempo = 0;

	while (japao > brasil) {
		brasil = brasil + (brasil * 0.03);
		japao = japao + (japao * 0.02);
		tempo = tempo + 1;
	}
	printf("%i", tempo);
	return 0;
}
