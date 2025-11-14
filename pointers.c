#include <stdio.h>

void swap(int* px, int* py);

int main() {
	int a=5,b=10;
	swap(&a,&b);
	printf("a=%d\nb=%d\n",a,b);


}

void swap(int* px , int* py){
	int tmp;
	tmp=*px;
	*px = *py;
	*py = tmp;
}
