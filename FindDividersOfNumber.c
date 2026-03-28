#include <stdio.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    unsigned long ulNumber;
    printf("Input an integer positive number\r\n");
    scanf("%lu", &ulNumber);
    printf("The number %lu has the following divisors:\r\n", ulNumber);
    for (unsigned long i = 1; i <= ulNumber; i++)
    {
        if (ulNumber % i == 0)
            printf("%lu ",i);
    }
    printf("\r\n");
    getchar();
    getc(stdin);
    return 0;
}
