#include <iostream>
#include <stdlib.h>
#include <queue>


template<typename T>
T* heapSort(T* v, int i, int j)
{

    int tam = i-j;

    std::priority_queue<T, std::vector<T>, std::greater<T> > monticulo;

    for (size_t posi = i; posi !=j ; posi++)
    {
        monticulo.push(v[posi]);
    }

    for (size_t posi = i; posi !=j ; posi++)
    {
        v[posi] = monticulo.top();

        monticulo.pop();
    }
    

    return v;

}