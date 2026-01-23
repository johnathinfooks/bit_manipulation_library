#include "bitman.h"
#include <stdio.h>

#define BITCOUNT 8

int main()
{
    int in[BITCOUNT] = {0, 0, 0, 0, 0, 1, 0, 0};
    int mod[BITCOUNT] = {0, 0, 0, 0, 0, 0, 1, 0};
    int out[BITCOUNT];

    int res = bin_subtract(in, BITCOUNT, out, BITCOUNT, mod);

    switch (res)
    {
        case 0: printf("Bitman function success.\n"); break;
        case -1: printf("Buffer size failure.\n"); break;
        case 1: printf("Bitman function failure.\n"); break;
    }

    for (int i = 0; i < BITCOUNT; i++) {
        printf("%d", in[i]);
    }
    printf("\n");

    for (int i = 0; i < BITCOUNT; i++) {
        printf("%d", mod[i]);
    }
    printf("\n");


    for (int i = 0; i < BITCOUNT; i++) {
        printf("%d", out[i]);
    }
    printf("\n");

}
