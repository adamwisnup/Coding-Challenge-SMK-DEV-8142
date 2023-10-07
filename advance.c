#include <stdio.h>

int main()
{
    int input_number, i, cube;

    printf("Input number: ");
    scanf("%d", &input_number);

    for (i = 1; i <= input_number; i++)
    {
        cube = i * i * i;
        printf("Current Number is : %d and the cube is %d\n", i, cube);
    }
    return 0;
}
