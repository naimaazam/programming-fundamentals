#include<stdio.h>
int main(){
	int choice, animal, vehicle, food, human;
	printf("1:animal\n2:vehicle\n3:food\n4:humans");
	scanf("%d", &choice);
	switch(choice){
		case 1 :
			printf("1:cat\n2:dog\n3:bird\n");
					scanf("%d", &animal);
			switch(animal){
					
				case 1:
					printf("cat\n");
					break;
				case 2:
					printf("dog\n");
					break;
				case 3:
					printf("bird\n");
					break;
			}
			break;
		case 2:
			printf("1:car\n2:bus\n3:bike\n");
					scanf("%d", &vehicle);
			switch(vehicle){
					
				case 1:
					printf("car\n");
					break;
				case 2:
					printf("bus\n");
					break;
				case 3:					
					printf("bike\n");
					break;
			}
			break;
		case 3:
			printf("1:pizza\n2:burger\n3:biryani\n");
						scanf("%d", &food);
				switch(food){
						
					case 1:
						printf("pizza\n");
						break;
					case 2:
						printf("burger\n");
						break;
					case 3:
						printf("biryani\n");
						break;
				}
			break;
		case 4:
			printf("1:female\n2:male\n3:child\n");
				 	scanf("%d", &human);  
			switch(human){
					
				case 1:
					printf("female\n");
					break;
				case 2:
					printf("male\n");
					break;
				case 3:
					printf("child\n");
					break;			 	
					}
	  	    break;
	}
	return 0;
	
}
 
