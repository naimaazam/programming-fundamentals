#include <stdio.h>
int main(){
	int choice, greetings, study, weather, help;
	printf("1:greetings\n2:study\n3:weather\n4:help");
	scanf("%d", &choice);
	switch(choice){
		case 1 :
			printf("1:hello\n2:how are you \n3:goodbye\n");
					scanf("%d", &greetings);
			switch(greetings){
					
				case 1:
					printf("hello\n");
					break;
				case 2:
					printf("how are you\n");
					break;
				case 3:
					printf("goodbye\n");
					break;
			}
			break;
		case 2:
			printf("1:programming\n2:mathematics\n3:AI\n");
					scanf("%d", &study);
			switch(study){
					
				case 1:
					printf("programming\n");
					break;
				case 2:
					printf("mathematics\n");
					break;
				case 3:					
					printf("AI\n");
					break;
			}
			break;
		case 3:
			printf("1:today\n2:tomorrow\n3:forecast\n");
						scanf("%d", &weather);
				switch(weather){
						
					case 1:
						printf("today\n");
						break;
					case 2:
						printf("tomorrow\n");
						break;
					case 3:
						printf("forecast\n");
						break;
				}
			break;
		case 4:
			printf("1:about chatbot\n2:commands\n3:exit\n");
					scanf("%d", &help);
			switch(help){
					
				case 1:
					printf("about chatbot\n");
					break;
				case 2:
					printf("commands\n");
					break;
				case 3:
					printf("exit\n");
					break;			 	
					}
	  	    break;
	}
	return 0;
	
}


