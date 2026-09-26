#include<stdio.h>
int main(){
	int choice, classification, regression, clustering, computervision;
	printf("1:classification\n2:regression\n3:clustering\n4:computervision");
	scanf("%d", &choice);
	switch(choice){
		case 1 :
			printf("1:logistic regression\n2:decision tree \n3:KNN\n");
					scanf("%d", &classification);
			switch(classification){
					
				case 1:
					printf("logistic regression\n");
					break;
				case 2:
					printf("decision tree\n");
					break;
				case 3:
					printf("KNN\n");
					break;
			}
			break;
		case 2:
			printf("1:linear regression\n2:polynomial regression\n3:SVR\n");
					scanf("%d", &regression);
			switch(regression){
					
				case 1:
					printf("linear regression\n");
					break;
				case 2:
					printf("polynomial regression\n");
					break;
				case 3:					
					printf("SVR\n");
					break;
			}
			break;
		case 3:
			printf("1:k-means\n2:hierarchical clustering\n3:DBSCAN\n");
						scanf("%d", &clustering);
				switch(clustering){
						
					case 1:
						printf("k-means\n");
						break;
					case 2:
						printf("hierarchical clustering\n");
						break;
					case 3:
						printf("DBSCAN\n");
						break;
				}
			break;
		case 4:
			printf("1:CNN\n2:YOLO\n3:R-CNN\n");
					scanf("%d", &computervision);
			switch(computervision){
					
				case 1:
					printf("CNN\n");
					break;
				case 2:
					printf("YOLO\n");
					break;
				case 3:
					printf("R-CNN\n");
					break;			 	
					}
	  	    break;
	}
	return 0;
	
}


 
