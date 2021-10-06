#include <stdio.h>
int main()
{
    char str[101];
    scanf("%100s", str);
    printf("%s \n", str);

    int i = 0;
    int numberCount = 0;
    int letterCount = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 58)
        {
            numberCount++;
        }
        else
        {
            letterCount++;
        }
        i++;
    }
    printf("Letter count is: %d\n", letterCount);
    printf("Number count is: %d\n", numberCount);
}