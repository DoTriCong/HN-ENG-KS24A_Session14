#include <stdio.h>

int main() {
    char str[] = "DoTriConggg";
    int text = 0;

    printf("Chuoi da khai bao: %s\n", str);
    int size=strlen(str);
    for (int i = 0; i<size; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            text++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            text++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", text);

    return 0;
}

