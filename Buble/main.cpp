#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int buff = 0;
   int A[] = {3, 9, 7, 5, 8, 1, 3, 2, 6, 0};

   // int N = 0;
   // int A[N];
   // cout << "Vvedite razmer massiva-> ";
   //cin >> N;

    int size = sizeof(A)/sizeof(A[0]);
    for (int i = 0; i < size; i++ )
        for (int j = size - 1; j > i; j--)
            if (A[j-1] > A[j])
            {
                buff = A[j-1];
                A[j-1] = A[j];
                A[j] = buff;
            }
    for (int k = 0; k < size; k++)
        cout << A[k] << " ";

    return 0;
}
