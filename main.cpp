#include<cstdlib>
#include<ctime>
#include<iostream>

#include "sortingAlgorithms.hpp"


int main(int argc, char const *argv[])
{
    int n = 10;
    int* v;

    size_t tam = n;
    v = new int[tam];


    for(size_t j = 0 ; j < tam ; j++)
        v[j]=rand()%10;

     


    
    std::random_shuffle(v,v+tam);

       for(size_t k = 0 ; k < tam ; k++)
        {
                if(k==0)
                        std::cout<<"[ ";

                if(k<tam-1)
                std::cout<<v[k]<<" , ";

                if(k== tam-1)
                        std::cout<<v[k]<<" ]"<<std::endl;
        }


        quickSort(v,0,tam);
        // insertionSort(v,5,tam); // start in i+1 to tam-1 v[0-tam-1]



    for(size_t k = 0 ; k < tam ; k++)
    {
        if(k==0)
            std::cout<<"[ ";

        if(k < tam-1)
        std::cout<<v[k]<<" , ";

        if(k==tam-1)
            std::cout<<v[k]<<" ]\n"<<std::endl;
    }








}
