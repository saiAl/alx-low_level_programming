#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
        int i;
        unsigned n1, n2, next;

        n1 = 1;
        n2 = 2;

        next = n1 + n2;

        printf("%u, %u, ", n1, n2);

        for (i = 3; i <= 98; i++)
        {
                n1 = n2;
                n2 = next;

                next = n1 + n2;

                if (i < 98)
                        printf("%u, ", next);
                else
                        printf("%u \n", next);
        }

}
