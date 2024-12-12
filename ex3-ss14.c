#include <stdio.h>
int main() {
    char chuoi[] = "Chao mung ban den voi lap trinh C";
    int size  = strlen(chuoi);

    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Chuoi dao nguoc: ");
    
    for (int i = size  - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    printf("\n");
    return 0;
}

