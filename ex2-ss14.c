#include <stdio.h>

int main() {
    char chuoi[] = "Hoc lap trinh C";
    int i = 0;

    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Cac ky tu trong chuoi:\n");

    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }

    return 0;
}

