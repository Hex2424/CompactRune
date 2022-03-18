#include "objectMethods.h"

uint32_t calculateBitPackArraySize(const b_size bitsInPack, const uint32_t size)
{
    uint32_t totalBits;
    totalBits = bitsInPack * size;
    totalBits /= 8;
    if (!(totalBits % 8))
        totalBits++;
    return totalBits;
}

