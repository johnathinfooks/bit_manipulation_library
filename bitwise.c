#include "bitman.h"

int shift_l (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
    if (size_in_buff != size_out_buff) {
        return -1;
    }

    for (int i = 0; i < (size_in_buff - shift_amount); i++) {
        out_buff[i] = in_buff[i + shift_amount];
    }
    for (int i = size_in_buff - shift_amount; i < size_in_buff; i++) {
        out_buff[i] = 0;
    }

    return 0;
}

int shift_r (int* in_buff, int size_in_buff, int* out_buff, int size_out_buff, int shift_amount)
{
    if (size_in_buff != size_out_buff) {
        return -1;
    }

    for (int i = size_in_buff; i > shift_amount; i--) {
        out_buff[i] = in_buff[i - shift_amount];
    }
    for (int i = 0; i < shift_amount; i++) {
        out_buff[i] = 0;
    }

    return 0;
}

int inverse(int* in_b, int size_in_b, int* out_b, int size_out_b)
{
    if (size_in_b != size_out_b) {
        return -1;
    }

    for (int i = size_in_b - 1; i >= 0; i--) {
        if (in_b[i] == 0) {
            out_b[i] = 1;
        }
        else if (in_b[i] == 1) {
            out_b[i] = 0;
        }
        else {
            return 1;
        }
    }

    return 0;
}
