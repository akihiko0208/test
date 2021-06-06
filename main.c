#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array1, *array2;
    array1 = (int *)malloc(sizeof(int) * 100); // BAD: never freed
    array2 = (int *)malloc(sizeof(int) * 100); // GOOD
    free(array2);
    return 0;
}

