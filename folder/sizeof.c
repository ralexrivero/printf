#include <stdio.h>


int main(void)
{
    char array[] = {
        {"a", 2},
        {"b", 3},
        {"c", 4},
        {"a", 2},
        {"b", 3},
        {"c", 4},
    };

int size = sizeof(array) / sizeof(array[0][0]);

printf("%d", size);
return (0);
}