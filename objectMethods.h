#include "definitions.h"

uint32_t calculateBitPackArraySize(const b_size bitsInPack, const uint32_t size);


class CompactList
{
    uint8_t* packedArray;
    CompactList(const b_size bitsInPack, const uint32_t size)
    {
        packedArray = new uint8_t[calculateBitPackArraySize(bitsInPack, size)];
    }

    void set()
    {


    }
};