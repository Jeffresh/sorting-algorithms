#include <iostream>
#include <stdlib.h>
#include <queue>


int* heapSort(int* v, int i, int j)
{

    int tam = i-j;

    std::priority_queue<int, std::vector<int>, std::greater<int> > monticulo;

    for (size_t posi = i; posi !=j ; posi++)
    {
        monticulo.push(v[posi]);
    }

    for (size_t posi = i; posi !=j ; posi++)
    {
        v[posi] = monticulo.top();

        monticulo.pop();
    }
    

}