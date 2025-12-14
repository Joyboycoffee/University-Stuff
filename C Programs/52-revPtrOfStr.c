#include <stdio.h>
#include <string.h>

int main() {
    char *s[] = { 
        "To err is human...", 
        "But to really mess things up...", 
        "One needs to know C!!" 
    };
    
    int n = sizeof(s) / sizeof(s[0]);  // number of strings
    char temp[10][200];  // buffer to store reversed string

    for (int i = 0; i < n; i++) {
        int len = strlen(s[i]);

        // Reverse the string into temp
        for (int j = 0; j < len; j++) {
            temp[i][j] = s[i][len - j - 1];
        }
        temp[i][len] = '\0';  // null-terminate the string

        s[i] = temp[i];  // point s[i] to reversed string
    }

    printf("Reversed strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i]);
    }
    

    return 0;
}
