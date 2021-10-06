#include <stdio.h>
int main()
{
    char str[101];
    char otherstr[101];
    scanf("%100s", str);
    scanf("%100s", otherstr);
    printf("%s \n", str);

    int i = 0;
    while (str[i] != '\0' || otherstr[i] != '\0')
    {
        if (str[i] != otherstr[i])
        {
            printf("Stringy nejsou stejné :(\n");
            return 0;
        }

        i++;
    }
    printf("Stringy jsou stejné ^.^\n");
}