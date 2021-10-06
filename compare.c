#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d je přestupný!", year);
            }
            else
            {
                printf("%d je Nepřestupný!", year);
            }
        }
        else
        {
            printf("%d je přestupný!", year);
        }
    }
    else
    {
        printf("%d je Nepřestupný!", year);
    }
}