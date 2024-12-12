#include <stdio.h>

int main() {
    char num[] = "Hoc lap trinh C";
    char text ;
    int sum = 0;

    printf("Chuoi da khai bao: %s\n", num);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf("%c", &text);

    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] == text) {
            sum++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", text, sum);

    return 0;
}

