#include <stdio.h>
int main(){
	int size = 0;
	scanf("%d", &size);
	int vet[size];
	for(int i = 0; i < size; i++){
		scanf("%d ", &vet[i]);
		}
		for(int i = size - 1; i >= 0; i--){
			printf("%d ", vet[i]);
			}

	}