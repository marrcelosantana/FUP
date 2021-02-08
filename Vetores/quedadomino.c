#include <stdio.h>

int main() {
	int a = 0; 
	int aux = 0;
	scanf("%d", &a);
	int vet[a];
	for(int i = 0; i < a ;i++) {
		scanf("%d", &vet[i]);
		if(vet[i] < aux) {
			printf("precisa de ajuste");
			break;
		}
		aux = vet[i];
	}
	if(aux == vet[a - 1]) 
	   printf("ok");
}