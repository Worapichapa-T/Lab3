#include <stdio.h>
int main() { 
	int h, m, s, Next_m; 
	scanf("%d:%d:%d", &h, &m, &s); 
	printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s); 
	printf("Next minutes: ");
	scanf("%d",&Next_m);
	
	m = m + Next_m;
	h = h + (m / 60);
	
	m = m % 60;
	h = h % 24;
	
	printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s);
	
	return 0; 
}
