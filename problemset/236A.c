#include <stdio.h>

int main() {
    char message[100 + 1];
    char message2[100 + 1];
    int i = 0;
    int count = 0;
    int result;


    fgets(message, 100 + 1, stdin);

    while (message[i] != '\0') {
        if (message[i] != '\n') {
            for (int j = 0; j < i; j++) {
                if (message[i] == message2[j]) { //search same character
                    count++;
                    break;
                }
            }
            message2[i] = message[i];
        }
        i++;
    }

    result = (i - 1) - count;

    if (result % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}