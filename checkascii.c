#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int max = 0;
    int maxindex = 0;
    int arraysum = 0;

    int arraysize;
    scanf("%d", &arraysize);
    int x[arraysize];

    for (int j = 0; j < arraysize; j++)
    {
        int random = rand() % 10;
        x[j] = random;
    }
    for (int i = 0; i < arraysize; i++)
    {
        printf("na indexu %d ", i);
        printf("se nachází %d \n", x[i]);
        if (x[i] > max)
        {
            maxindex = i;
            max = x[i];
        }
        arraysum += x[i];
    }
    int avg = arraysum / arraysize;
    printf("maximum je: %d \n", max);
    printf("s indexem: %d \n", maxindex);
    printf("Sum of the array is: %d \n", arraysum);
    printf("average of the array is: %d \n", avg);

    return 0;
}