
template<typename T>
T* sort(T* v, int k, int j)
{
        int aux = v[j];
        while(j>k && aux < v[j-1])
        {
                v[j]=v[j-1];
                j= j-1;

        }

        v[j] = aux;

        return v;
}



template<typename T>
T* insertionSort(T* v,int in, int end)
{
        for(int i = in+1; i< end; i++ )
            sort(v,in,i);

            

        return v;
}
