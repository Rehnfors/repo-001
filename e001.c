/**
 * e001.c
 * Jesper Rehnfors
 *
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    int wtf;
    printf("please enter [2] if you wish to get greeted in swedish, otherwise goodbaj");
    scanf("%d", &wtf);

    if (wtf == 2)
    {
        printf("tjohej");
    }
    else
    {
        printf("Goodbaj");
    }
}
