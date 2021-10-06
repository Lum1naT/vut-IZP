#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    char password[101];
    char strictness[] = argv[1];
    char parameter = argv[2][0];
    if (argc > 2)
    {
        bool stats = true;
    }
    else
    {
        bool stats = false;
    }

    while (true)
    {
        int returnvalue = scanf("%s100", password);

        if (returnvalue == EOF)
        {
            // final step here, dont forget stats
            return 1;
        }
        else
        {
            // processing of password, break out of the itteration, falls back to while anyway
            printf("%s\n", password);

            continue;
        }
    }
}