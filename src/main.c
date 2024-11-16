#include <stdio.h>
#include "test.h"

#include <string.h>

#include <math.h>

void my_func(int x, int y);
int main(int, char **)
{

    int a = atoi("11223");
    my_func(a, 2);
    printf("Hello, from CDemo!\n");
}
