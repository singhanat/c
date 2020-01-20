#include <stdio.h>

int main () {
    char i, row_count = 0;
    unsigned char j;
    int k;
    for(i = -127; i < 127; i++) {
        printf("%04d:%c\t", i, i);
        if(row_count >= 5) {
            row_count++;
            printf("\n");
            row_count = 0;
        }
    }
    printf("\n");
    printf("\n");
    row_count = 0;
    for(j = 0; j < 255; j++) {
        printf("%04d:%c\t", j, j);
        if(row_count >= 5) {
            row_count++;
            printf("\n");
            row_count = 0;
        }
    }

    printf("\n");
    printf("\n");
    row_count = 0;
    for(k = 0; k < 1024; k++) {
        printf("%04d:%c\t", k, k);
        if(row_count >= 5) {
            row_count++;
            printf("\n");
            row_count = 0;
        }
    }

    printf("\n");
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c %d%\n", -37, -37, -37, -80, -80, -80, -80, -80, -80, -80, 30);

    return 0;
}