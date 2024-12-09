#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[100];
    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter the substring: ");
    gets(subStr);

    if (strstr(mainStr, subStr) != NULL) {
        printf("True the substrign is found\n");
    } else {
        printf("False the substring is not found\n");
    }
    return 0;
}
