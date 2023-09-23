/*
OOPL-B5
Write  a function template for selection sort that inputs, sorts and outputs an integer array and float array
*/

#include <iostream>
using namespace std;
template <typename T>

void sort(T a[], int n)
{
    int min;
    T temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp; 
    }
    cout << "\n Selction Sorted elements are \n";
    for (int i = 0; i < n; i++)
        cout << "\t" << a[i];
}

int main()
{
    int n, ch;
    int a[10];
    float b[10];

    do
    {
        cout << "\n Selection sort using function template" << endl;
        cout << "1. Selection Sort Interger Numbers" << endl;
        cout << "2. Selection Sort Float Array" << endl;
        cout << "3. Exit " << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n Sorting Integer Numbers ";
            cout << "\n Enter how many numbers ypu wanted sort : ";
            cin >> n;
            cout << "Enter the elements " << endl;
            for (int i = 0; i < n; i++)
                cin >> a[i];
            sort<int>(a, n);

            break;

        case 2:
            cout << "\n Sorting Floating Numbers ";
            cout << "\n Enter how many numbers you wanted sort : ";
            cin >> n;
            cout << "Enter the elements " << endl;
            for (int i = 0; i < n; i++)
                cin >> b[i];
            sort<float>(b, n);

            break;

        case 3:
            cout << "Exitting program !!" << endl;
            exit(0);
        }

    } while (ch <= 3);
    return 0;
} 