#include <stdio.h>

int main()
{
    long int array[4];
    int count = 0; //same color

    scanf("%ld%ld%ld%ld", &array[0], &array[1], &array[2], &array[3]);

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (array[i] == array[j]) {
                array[j] = array[j+1];
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}