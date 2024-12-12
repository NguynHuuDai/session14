#include <stdio.h>

int main() {
    char str[] = "Hello, World! 123";
    int letter_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letter_count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", letter_count);

    return 0;
}

