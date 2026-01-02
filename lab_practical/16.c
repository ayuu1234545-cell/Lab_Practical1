#include <stdio.h>

int main() {
    int color;

    printf("Enter color number (1-Red, 2-Yellow, 3-Green): ");
    scanf("%d", &color);

    switch (color) {
        case 1:
            printf("Red - Stop");
            break;
        case 2:
            printf("Yellow - Ready");
            break;
        case 3:
            printf("Green - Go");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
