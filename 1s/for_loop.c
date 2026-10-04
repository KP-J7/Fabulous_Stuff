#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d \n", i, i,  i * i); /* вывод квадрата числа i*/
    }
    return 0;
}
