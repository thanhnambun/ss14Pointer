#include <stdio.h>
#include <string.h>
int a(char *std){
	int count=0;
//	char *ptt = std; 
	while(*std !='\0'){
		count++;
		std++; 
	}	
	return	count; 
}  
int main(){
	char arr[100];
	char arr1[100];
	printf("nhap chuoi 1\n");
	scanf("%s", arr);
	printf("nhap chuoi 2\n");
	scanf("%s", arr1);
	if(a(arr)>a(arr1)){
		printf("chuoi arr co do dai lon hon \n"); 
	}else {
		if(a(arr)<a(arr1)){
			printf("chuoi arr1 co do dai lon hon \n");
		}else{
			printf("2 chuoi bang nhau"); 
		}  
	} 
}
