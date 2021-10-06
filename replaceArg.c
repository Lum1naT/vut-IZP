#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    char c = argv[1][0];

    int i = 0;
    while (true)
    {
        if (argv[1][i] == '\0')
        {
            return 0;
        }
        else
        {
            if (argv[1][i] == c)
            {
                printf("%s", "-");
            }
            else
            {
                printf("%c", argv[1][i]);
            }
        }

        i++;
    }
    printf("Stringy jsou stejné ^.^\n");
}