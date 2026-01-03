#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month); 

    switch (month) {
        case 11:
        case 12:
        case 1:
            printf("Winter");
            break;
            
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Summer");
            break;

        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Rainy");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}
