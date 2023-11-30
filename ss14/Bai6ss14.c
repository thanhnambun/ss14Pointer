#include<stdio.h>
#include<stdlib.h>
int cpyStr(char *str, char *des){
    while(*str != '\0'){
    	*des = *str;
    	str++;
    	des++;
    }
    *des = '\0';
}
int addStr(char *str, char *addstr){
	while(*str != '\0'){
        str++;
    }
    while(*addstr != '\0'){
    	*str = *addstr;
    	str++;
    	addstr++;
    }
    *str = '\0';
}
int strLen(char *str){
	const char *ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - str;
}
int reserveStr(char *str){
	int length = strLen(str);
	for(int i=length;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
}
int main(){
	char str[100];
	char desStr[100];
	char addstr[50];
	char str1[100];
	int length=0;
	do{
		printf("************************MENU**********************\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Sao chep mang vao mang khac\n");
		printf("4. Nhap vao chuoi khac, them chuoi do vao chuoi ban dau\n");
		printf("5. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
		printf("6. In ra chuoi dao nguoc\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				str[100];
				printf("Nhap vao chuoi: ");
				scanf("%s",str);
				break;
			case 2:
				printf("Chuoi vua nhap la: ");
				printf("%s",str);
				break;
			case 3:
			    printf("Chuoi nguon la: %s\n",str);
			    cpyStr(str,desStr);
			    printf("Chuoi da sao chep la: %s",desStr);
				break;
			case 4:
				printf("Nhap vao chuoi moi: ");
				scanf("%s",addstr);
				addStr(str,addstr);
				printf("Chuoi sau khi duoc them vao chuoi goc la: %s",str);
				break;
			case 5:
				str[100];
				str1[100];
				printf("Nhap vao chuoi khac: ");
				scanf("%s",str1);
				int strLen1 = strLen(str);
				printf("Do dai cua chuoi goc la: %d\n",strLen1);
				int strLen2 = strLen(str1);
				printf("Do dai cua chuoi moi la: %d\n",strLen2);
				if(strLen1==strLen2){
					printf("Chuoi goc bang chuoi moi\n");
				} else if(strLen1>strLen2){
					printf("Chuoi goc dai hon chuoi moi\n");
				} else{
					printf("Chuoi moi dai hon chuoi goc\n");
				}
				break;
			case 6:
				printf("Chuoi dao nguoc la:");
				reserveStr(str);
				break;
			case 7:
				printf("Goodbye and see u again <3");
				exit(0);
		}
	} while(1==1);
}
