


template<typename t>
int partition( t* v, int i , int j )
{
    int p = i ;
    int x = v[i];

    for (size_t k = i + 1; k < j; k++)
    {
        if(v[k] <= x)
        {
            p++;
            std::swap(v[p],v[k]);
        }

    }
    v[i] = v[p];
    v[p] = x;
    
    return p;
}

template<typename T>
T* quickSort(T* v, int i, int j)
{
    int n = j - i;
    int n0 = 3;
    int p = 0;






    if( n <= n0)
        insertionSort(v,i,j);
    
    else
    {

        p = partition(v,i,j);
        quickSort(v,i,p);
        quickSort(v,p+1,j);

    }



    return v;
    
}