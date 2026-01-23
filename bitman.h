#ifndef BITMAN_H
#define BITMAN_H

// TRANSLATIONS

/**
 * @brief Translates unsigned decimal to binary.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param dec Decimal number being translated to binary.
 */
void dec_bin(int* out_b, int size_out_b, int dec);

// WARN: incomplete
void bin_hex();

// WARN: incomplete
void hex_bin();

// WARN: incomplete
void bin_dec();

// BITWISE

/**
 * @brief Shifts bits in input n amount of spaces left.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array, n.
 * @param out_b Output array of binary digits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the left.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_shift_l(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

/**
 * @breif Shifts bits in input n amount of spaces right.
 * @param in_b Input array of bits to be shifted.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param shift_amount n-number of spaces bits are shifted to the right.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_shift_r(int* in_b, int size_in_b, int* out_b, int size_out_b, int shift_amount);

// WARN: incomplete
void inverse();

// MATH

/**
 * @brief Adds binary array add_bin to binary array in_b; out_b = in_b + add_bin
 * @param in_b Input array of bits.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param add_bin Array of bits of a binary number to be added to input.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_add(int* in_b, int size_in_b, int* out_b, int size_out_b, int* add_bin);

// WARN: incomplete
/**
 * @brief Subtracts binary array in_b by binary array sub_bin; out_b = in_b - sub_bin
 * @param in_b Input array of bits.
 * @param size_in_b Length of input array.
 * @param out_b Output array of bits.
 * @param size_out_b Length of output array.
 * @param sub_bin Array of bits in_b is being subtracted by.
 * @return 0 upon success, -1 upon size correlation failure, 1 upon failure.
 */
int bin_subtract(int* in_b, int size_in_b, int* out_b, int size_out_b, int* sub_bin);

#endif // BITMAN_H
