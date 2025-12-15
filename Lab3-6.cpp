#include <stdio.h>

int main( ){
	int score;
	scanf("%d", &score);
	if (score < 0) {
		printf("error score");
	}
	else if (score > 100){
		printf("error score");
	}
	else if (score >= 68) {
		if (score >= 80) {
			printf("A");
		}
		else if (score >= 75) {
			printf("B");
		}
		else {
			printf("C");
		}
		
	}
	else {
		if (score >= 50) {
			printf("D");
		}
		else {
			printf("F");
		}
	}
	
	return 0;
}
	

