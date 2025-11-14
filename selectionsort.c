#include <stdio.h>
#define ARREY_LENGHT 10

int main (){
	int min, where, sorted, tmp, i;
	printf("siralamak istedigniz sayilari aralarinda bir bosluk olacak sekilde giriniz\n");

	int arry[] = {23, 3, 43, 46, 6, 89, 33, 434, 0, 1};
	for(sorted=0;sorted<ARREY_LENGHT;sorted++){
		min=sorted;
		for(where=sorted;where<ARREY_LENGHT;where++){
			if(arry[where]<arry[min]){
				min=where;
			}	
		}
		tmp=arry[sorted];
		arry[sorted]=arry[min];
		arry[min]=tmp;
	}
	for(i=0;i<ARREY_LENGHT;i++){
		printf("%d, ",arry[i]);
	}
	return 0;

}

