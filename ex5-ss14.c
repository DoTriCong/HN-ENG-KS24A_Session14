#include <stdio.h>

int main() {
    char str[] = "Hoc lap trinh C";
    int text = 0;
    int num = 0;

    printf("Chuoi da khai bao: %s\n", str);
    int size = strlen(str); 
    for (int i = 0; i<size; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            num = 0;
        } else if (num == 0) {
          num= 1;
            text++;
        }
    }

    printf("So tu trong chuoi: %d\n", text);

    return 0;
}

