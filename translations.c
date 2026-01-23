#include "bitman.h"

// TODO: review decimal_binary(); make it array input
void dec_bin(int* output_buff, int output_buff_size, int input)
{
    int rem;

    for (int i = output_buff_size - 1; i >= 0; i--)
    {
        rem = input % 2;
        input /= 2;
        output_buff[i] = rem;
    }
}
