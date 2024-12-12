#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            length++;
        }
    }

    printf("Chuoi vua nhap la: %s", str);
    printf("Do dai cua chuoi la: %d\n", length);

    return 0;
}
