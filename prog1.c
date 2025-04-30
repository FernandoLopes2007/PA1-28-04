#include <stdio.h>
#include <stdlib.h>

void main() {
	int n;
	int seq;
	printf("Digite um número.\n");
	scanf("%d",&n);
	printf("Sequência do seu número:\n");
	for(seq=1;seq<=11;seq++){
		printf("%d",n+seq);
	}
}
