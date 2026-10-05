#include <stdio.h>
int main(){
	int attendance, absent=0, present=0;
	for (int i=1; i<=30; i++){
		printf("Is student absent or present\n Press 1 if present and 0 if absent\n ");
		scanf("%d", &attendance);
		if (attendance==1){
			present = present + 1;
		} 
		else {
			absent = absent + 1;
		}
	}
	printf("total number of present students: %d\n", present);
	printf("total number of absent students: %d\n", absent);
	return 0;
	
}

