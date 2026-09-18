#include <stdio.h>

int main() {
    char name[50];
	int age;
	char city[50];
	printf("enter your name; \n");
	 fgets(name,50,stdin);
	printf("enter city: \n");
	scanf("%s",&city);
	printf("enter age: \n");
	scanf("%d",&age);
	printf("name: %s",name);
	printf("age: %d\n",age);
	printf("city: %s\n",city);

     return 0;
}
