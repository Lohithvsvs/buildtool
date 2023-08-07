#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int reverse_string() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from fgets
    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0;
}
