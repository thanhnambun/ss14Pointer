#include<stdio.h>
int sortNum(int *arr, int size){
	for(int i=1;i<size;i++){
	    int nopeSort = *(arr+i);
	    int j = i-1;
	    while(j>=0 && *(arr+i) > nopeSort){
	    	*(arr+j+1) = *(arr+j);
	    	j--;
	    }
	    *(arr+j+1) = nopeSort;
	}
}
int main(){
	int size;
	int arr[size];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	sortNum(arr,size);
	printf("Mang sau khi sap xep la: ");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
