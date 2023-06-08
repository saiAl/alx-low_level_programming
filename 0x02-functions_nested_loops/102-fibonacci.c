#include <stdio.h>


int main(void)
{

        int i;
        long int n1, n2, next;

        n1 = 1;
        n2 = 2;

        next = n1 + n2;
        printf("%lu, %lu, ", n1, n2);
        
        for (i = 3; i <= 50; i++)
        {
                n1 = n2;
                n2 = next;
                next = n1 + n2;
                
                if (i < 50)
                        printf("%lu, ", next);

                else
                        printf("%lu \n", next);
        }
        return (0);
}
