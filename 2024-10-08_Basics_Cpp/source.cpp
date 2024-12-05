//
// Created by Nick on 10/4/2023.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-auto"
#include "source.h"

#include <cmath>

double meanOfEvenNumbers(const int array[], int arrayLength)
{
    int sum = 0;
    int count = 0;
    for(int i = 0; i < arrayLength; i++)
    {
        if(array[i] % 2 == 0)
        {
            sum += array[i];
            count++;
        }
    }
    if(count > 0)
    {
        return sum / count;
    }
    return 0;
}

std::string* wordBuilder(const char array[], int arrayLength, size_t *returnSize)
{
    *returnSize = arrayLength * (arrayLength -1);
    std::string* combinations = new std::string[*returnSize];
    *returnSize = 0;
    for(size_t i = 0; i < arrayLength; i++)
    {
        for(size_t j = 0; j < arrayLength; j++)
        {
            if(j!=i)
            {
                combinations[*returnSize] = {array[i], array[j]};
                *returnSize = *returnSize + 1;
            }
        }
    }
    return combinations;
}

std::string* wordBuilderTC(const char array[], int arrayLength, size_t *returnSize)
{
    *returnSize = arrayLength * (arrayLength -1) * (arrayLength - 2);
    std::string* combinations = new std::string[*returnSize];
    *returnSize = 0;
    for(size_t i = 0; i < arrayLength; i++)
    {
        for(size_t j = 0; j < arrayLength; j++)
        {
            if(j!=i)
            {
                for(size_t k = 0; k < arrayLength; k++)
                {
                    if(k!=i && k!=j)
                    {
                        combinations[*returnSize] = {array[i], array[j], array[k]};
                        *returnSize = *returnSize + 1;
                    }
                }
            }
        }
    }
    return combinations;
}

size_t countTheOnes(const std::vector<std::vector<int>>& array)
{
    int sum = 0;
    for(size_t i = 0; i < array.size(); i++)
    {
        for(size_t j = 0; j < array[i].size(); j++)
        {
            sum += array[i][j];
        }
    }
    return static_cast<size_t>(sum);
}

#pragma clang diagnostic pop