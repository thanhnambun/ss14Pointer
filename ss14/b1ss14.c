#include <stdio.h>
	struct student
	{
		char name[100];
		int age;
		int phoneNumber;
		char gmail[100]; 
	 };
int main(){	
	struct student studen1={
		"Nguyen Thanh Nam",
		 18,
		06574,
		"nambun@gmail.com", 
	};  
	printf("name : %s \n",studen1.name);
	printf("age : %d \n",studen1.age);
	printf("phoneNumber : %d \n",studen1.phoneNumber);
	printf("gmail : %s \n",studen1.gmail);
	 
} 
 
