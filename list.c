#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b, n;
		
	scanf("%d",&n);
	int* p = malloc(n * sizeof(int));
	
	for(a=0;a<n;a++){
		scanf("%d",&b);
		p[a]=b;
	}

	for(int c =0 ; c<n; c++){
		printf("%d ,",p[c]);
	}

	free(p);

}
