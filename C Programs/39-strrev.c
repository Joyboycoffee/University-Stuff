#include <stdio.h>


int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    // calculate length manually
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    
    // reverse logic
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
