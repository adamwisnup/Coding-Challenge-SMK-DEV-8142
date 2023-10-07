#include <stdio.h>

int main()
{
    int input_number = 6;
    int i, cube;
    for (i = 1; i <= input_number; i++)
    {
        cube = i * i * i;
        printf("Current Number is : %d and the cube is %d\n", i, cube);
    }
    return 0;
}
