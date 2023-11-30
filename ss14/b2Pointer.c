#include <stdio.h>
int swap(int*a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	 
}
int main(){
	int x, y;
	printf("nhap vao 2 so nguyen x, y \n");
	scanf("%d %d",&x, &y);
	printf("hieu 2 so truoc khi doi la : %d \n",x-y);
	swap(&x,&y); 
	printf("hieu 2 so sau khi doi la :%d",x-y); 
} 
