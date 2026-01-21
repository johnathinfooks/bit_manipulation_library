#include "bitman.h"

// TODO: review decimal_binary();
void decimal_binary(int* output_buff, int output_buff_size, int input)
{
    int rem;

    for (int i = output_buff_size - 1; i >= 0; i--)
    {
        rem = input % 2;
        input /= 2;
        output_buff[i] = rem;
    }
}

void binary_decimal(int* output_buff, int* input_buff, int input_buff_size)
{
    // translations and stuff
}

void binary_hexadecimal(int* output_buff, int output_buff_size, int* input_buff, int input_buff_size)
{
    for (int i = output_buff_size - 1; i > 0; i--)
    {
        for (int j = input_buff_size - 1; j > input_buff_size - 5; j--) {

        }
    }
}
