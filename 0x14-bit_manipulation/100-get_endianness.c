#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
    unsigned int num = 1;
    char *endianCheck = (char *)&num;

    // If the first byte (lowest address) is 1, the machine is little-endian.
    // If the last byte (highest address) is 1, the machine is big-endian.
    return (*endianCheck == 1);
}
