



int* merge(int* v, int i, int k, int j)
{
    int n = j - i   ;

    int w[n];

    int p = i, q = k;

    for (size_t l = 0; l < n; l++)
    {
        if (p < k && ( q >= j || v[p] <= v[q]))
        {
                w[l] = v[p];
                p++;
        }

        else
        {
            w[l] = v[q];
            q++;
        }
        


    }

    for (size_t l = 0; l < n; l++)
    {
        v[i+l] = w[l];
    }
    
    

    return v;
}


int* mergeSort(int* v, int i, int j)
{
    int n = j - i ;
    int n0 = 3;
    int  k = 0;

    if (n <= n0)
    {
        insertionSort(v,i,j);

        
    }

    else
    {
        k = i + n/2;
        mergeSort(v,i,k);
        mergeSort(v,k,j);
        merge(v,i,k,j);
    }


    return v;
    
     


}