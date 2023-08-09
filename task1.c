(a)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int z=1,  rows = 10;


    for (int i = 1; i < rows; i++)
    {


        for (int j = 1; j < 2*(rows-i); j++)
        {
                   printf(" ");}

        for ( int k = 1 ; k< i;k++ ){

            printf("%d  " , z);
            z++;
        }

        printf("\n");
    }

    return 0;
}
------------------------------------------------------------------------------------------------------------
(b)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int z=1,  rows = 10;


    for (int i = 0; i < rows; i++)
    {


        for (int j = 0; j < 2*(rows-i); j++)
        {
                   printf(" ");}

        for ( int k = 0 ; k< 2*i+1;k++ ){

            printf("%d " , z);
            z++;
        }

        printf("\n");
    }

    return 0;
}
---------------------------------------------------------------------------------------------------------------

(c)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int z=1,  rows = 10;


    for (int i = 1; i < rows; i++)
    {


        for (int j = 1; j < (rows-i); j++)
        {
                   printf(" ");}

        for ( int k = 1 ; k< i;k++ ){

            printf("%d " , k);

        }

        printf("\n");
    }

    return 0;
}
----------------------------------------------------------------------------------------------------*/
(d)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int z=1,  rows = 10;


    for (int i = 0; i < rows; i++)
    {


        for (int j = 0; j < 2*(rows-i); j++)
        {
                   printf(" ");}

        for ( int k = 0 ; k< 2*i+1;k++ ){

            printf("%d  " , k);

        }

        printf("\n");
    }

    return 0;
}

