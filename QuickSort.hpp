#include <iostream>
#include <vector>

template <class sTy>
void swap(sTy* first, sTy* second)
{
    sTy taker = *first;
    *first = *second;
    *second = taker;
}

template <class pTy>
int partition(std::vector<pTy>& sVec, int left, int right)
{
    int mid = sVec[right], swapIndex = left - 1;
    for (int i = left; i < right; i++)
    {
        if (sVec[i] < mid)
            swap(&sVec[i], &sVec[++swapIndex]);
    }
    swap(&sVec[++swapIndex], &sVec[right]);
    return swapIndex;
}

template <class T>
void QSort(std::vector<T>& sVec, int left = 0, int right = INT_MAX)
{
    if (right == INT_MAX)
        right = sVec.size() - 1;
    if (left < right)
    {
        int pIndex = partition(sVec, left, right);

        // Сортировка левого массива
        QSort(sVec, left, pIndex - 1);
        // Сортировка правого массива
        QSort(sVec, pIndex + 1, right);
    }
}
