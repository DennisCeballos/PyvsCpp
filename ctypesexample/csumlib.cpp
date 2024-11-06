#ifdef _WIN32
#define LIBRARY_API extern "C" __declspec(dllexport)
#else
#define LIBRARY_API extern "C"
#endif

#include <iostream>
#include <algorithm>

/** 
 * Compute the sum an array
 * @param n number of elements
 * @param array input array
 * @return sum
 */
LIBRARY_API long long csum(int n, int *array)
{
    long long res = 0;
    for (int i = 0; i < n; ++i)
    {
        res += array[i];
    }
    return res;
}

LIBRARY_API double *add(double *a, double *b)
{
    double *res = new double[3];

    for (int i = 0; i < 3; ++i)
    {
        res[i] = a[i] + b[i];
        //std::cout << a[i] << "\n";
    }

    return res;
}

LIBRARY_API int * ordenar(int *lista)
{
    int size = sizeof(lista)/sizeof(lista[0]);
    std::sort(lista,lista+size);

    return lista;
}