#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char str[1001];

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
        len--;

    printf("%d", len);

    return 0;
}