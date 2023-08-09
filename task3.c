(A)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i <rows; i++)
    {


        for (int j = 0; j < 2*(rows-i) ; j++)
        {
            printf("");

        }


        for (int k = 0; k < i; k++)
        {

                printf("*");


        }
        printf("\n");
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------
(B)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i < rows; i++)
    {


        for (int j = 10; j > 2 * (rows - i); j--)
        {
            printf("");
        }


        for (int k = 10; k >i; k--)
        {

                printf("*");


        }
        printf("\n");
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------
(c)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i < rows; i++) {


        for (int j = 11; j > (rows - i) - 1; j--) {
            printf(" ");
        }

        for (int k = 11; k > i; k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------
(d)

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i < rows; i++) {


        for (int j = 0; j < (rows - i) - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k < i; k++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------
(e)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i < rows; i++)
    {


        for (int j = 0; j <  2*(rows - i) ; j++)
        {
            printf(" ");
        }


        for (int k = 0; k < i; k++)
        {

                printf("*");


        }
        printf("\n");
    }
    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------
(f)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i < rows; i++) {


        for (int j = 0; j < (rows - i) - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k < i; k++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
---------------------------------------------------------------------------------------------------------------
(g)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int   rows = 11;


    for (int i = 1; i < rows; i++)
    {


        for (int j = 1; j < rows; j++)
        {
                   printf("");}

        for ( int k = 1 ; k<rows;k++ ){

            printf("*");

        }

        printf("\n");
    }

    return 0;
}

---------------------------------------------------------------------------------------------
(h)
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int rows = 11;


    for (int i = 0; i <rows; i++)
    {


        for (int j = 0; j < 2*(rows-i) ; j++)
        {
            printf(" ");

        }


        for (int k = 0; k < 2*i+1; k++)
        {

                printf("* ");


        }
        printf("\n");
    }
    return 0;
}
