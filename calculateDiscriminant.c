#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 1;
    int D = (b * b) - (4 * a * c);

    if (D == 0)
    {
        double root;

        root = (-b / (2 * a));
        printf("kořen 1: %f \n", root);
    }
    else if (D > 0)
    {
        double root1, root2;

        root1 = ((-b + sqrt(D)) / (2 * a));
        root2 = ((-b - sqrt(D)) / (2 * a));
        printf("kořen 1: %f \n", root1);
        printf("kořen 2: %f \n", root2);
    }
    return 0;
}