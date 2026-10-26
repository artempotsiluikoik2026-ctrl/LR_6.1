//ЛР 6.1 іт

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* c, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

int Count(int* c, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (c[i] > 0 || c[i] % 2 != 0)
            k++;
    return k;
}

int Sum(int* c, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (c[i] > 0 || c[i] % 2 != 0)
            S += c[i];
    return S;
}

void Zero(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        if (c[i] > 0 || c[i] % 2 != 0)
            c[i] = 0;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 27;
    const int Low = -35;
    const int High = 25;
    int c[n];

    Create(c, n, Low, High);
    cout << "Array:" << endl;
    Print(c, n);

    cout << "Count = " << Count(c, n) << endl;
    cout << "Sum   = " << Sum(c, n) << endl;

    Zero(c, n);
    cout << "Modified array:" << endl;
    Print(c, n);

    return 0;
}