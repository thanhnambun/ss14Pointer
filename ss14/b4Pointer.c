#include<stdio.h>
#include<stdlib.h>
int copy(int *ptr1, int *ptr2, int n){
	for(int i=0;i<n;i++){
		*(ptr2+i) = *(ptr1+i);
        printf("arrCopy[%d]= %d\n",i,*(ptr2+i));
	}
}
int insert(int *ptr,int n,int *ci){
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",*ci);
		scanf("%d", (ptr+*ci));
		(*ci)++;
	}
}
int print(int *ptr,int n){
	printf("%d\n",n);
	printf("Mang duoc in ra la: \n");
	for(int i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
}
int swapArr(int *ptr1, int *ptr2, int n){
	for(int i=0;i<n;i++){
		int temp = *(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}
	printf("Mang sau khi doi cho la: ");
	for(int i=0;i<n;i++){
		printf("newArr[%d]= %d\n",i,*(ptr2+i));
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]= %d\n",i,*(ptr1+i));
	}
}
int reverse(int *ptr, int n){
	printf("Mang sau khi duoc dao nguoc la\n");
	for(int i = n - 1; i>0; i--){
		printf("arr[%d] = %d\n",i ,*(ptr + i));
	}
}

int findKey(int *ptr, int n, int key){
	for(int i = 0; i < n; i++){
		if(*(ptr + i) == key){
			printf("Ky tu %d can tim tai arr[%d]\n", key, i);			
		}
		return 0;		
	}
	printf("Ky tu %d can tim khong co trong mang\n", key);
}
int main(){
	int currentIndex;
	int arr[100],size;
	int arrCpy[100];
	int newArr[100];
	int key;
	do{
		printf("*****************************MENU*****************************\n");
		printf("1. Nhap vao mang\n");
		printf("2. In ra mang\n");
		printf("3. Sao chep mang vao mang khac\n");
		printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
		printf("5. Dao nguoc mang\n");
		printf("6. Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang: ");
				scanf("%d",&size);
	            insert(arr,size,&currentIndex);
				break;
			case 2:
				print(arr,currentIndex);
				break;
			case 3:
				printf("Mang sau khi duoc sao chep la: \n");
				copy(arr,arrCpy,currentIndex);
				break;
			case 4:
				printf("Nhap so phan tu mang moi: ");
				for(int i=0;i<currentIndex;i++){
					printf("newArr[%d]= ",i);
					scanf("%d",&newArr[i]);
				}
				swapArr(arr,newArr,currentIndex);
				break;
			case 5:
				reverse(arr, currentIndex);
				break;
			case 6:
				printf("Nhap ky tu can tim kiem\n");
				scanf("%d", &key);
				findKey(arr, currentIndex, key);
				break;
			case 7:
				exit(0);
		}
	} while(1==1);
}

