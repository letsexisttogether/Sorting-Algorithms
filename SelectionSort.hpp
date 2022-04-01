#include <iostream>

template <typename T>
void SelectionSort(std::vector<T>& sVec)
{
    for (size_t i = 0; i < sVec.size() - 1; i++)
    {
        size_t minIndex = i; // запоминаем минимальный индекс элемента
        for (size_t j = i + 1; j < sVec.size(); j++)
            if (sVec[j] < sVec[minIndex]) // найден элемент меньший от текущего минимального элемента
                minIndex = j;
        if (minIndex != i) // найден элемент меньший от текущего рассмариваемого элемента
        {
            T taker = sVec[i];
            sVec[i] = sVec[minIndex];
            sVec[minIndex] = taker;
        }
    }
}
