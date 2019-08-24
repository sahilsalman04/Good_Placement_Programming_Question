
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//function to check if it is possible to obtain a string by rotating two time either in clockwise or in anticlockwise
void isRotEqual(char s1[], char s2[]) {

    char aclk[strlen(s1)], clk[strlen(s1)];
    int i = 0, len = strlen(s1), j = 0;
    if (strlen(s1) != strlen(s2)) {
        printf("\nString Length Should Be same.\n");
        return;
    }
    //anticlockwise rotation
    for (i = len - 2; i < len; i++) {
        aclk[j++] = s2[i];
    }

    for (i = 0; i < len - 2; i++) {
        aclk[j++] = s2[i];
    }
    j = 0;
    if (strcmp(s1, aclk) == 0) {
        printf("\nString obtained By Anticlockwise Rotation.\n");
        return;
    }

    //clockwise rotation
    for (i = 2; i < len; i++) {
        clk[j++] = s2[i];
    }

    for (i = 0; i < len - 3; i++) {
        clk[j++] = s2[i];
    }


    if (strcmp(s1, clk) == 0) {
        printf("\nString obtained By Clockwise Rotation.\n");
        return;
    }
}



//driver function
int main() {
    char str1[100], str2[100];
    printf("Enter First String\n");
    scanf("%s", str1);

    printf("Enter Second String\n");
    scanf("%s", str2);

    printf("String1 = %s\nString2 = %s", str1, str2);

    isRotEqual(str1, str2);
    return 0;
}

