#include <iostream>
#include <vector>

template <class T>
void InsertionSort(std::vector<T>& sVec)
{
    for (int i = 1; i < sVec.size(); i++)
    {
        T key = sVec[i];
        int j = i - 1;
        while (j >= 0 && sVec[j] > key)
        {
            sVec[j + 1] = sVec[j];
            --j;
        }
        sVec[j + 1] = key;
    }
}
