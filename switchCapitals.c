#include <stdio.h>
int main()
{
    char str[101];
    scanf("%100s", str);
    printf("%s \n", str);

    int i = 0;

    int gap = 'a' - 'A';

    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + gap;
        }

        i++;
    }
    printf("uncapitalized word is: %s\n", str);
}