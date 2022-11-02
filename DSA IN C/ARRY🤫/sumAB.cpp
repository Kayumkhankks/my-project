#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int i, j, max = 0, n, k, sum = 0;
    cout << "Enter the size : ";

    cin >> n;
    cout << endl;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the no." ;
        cin >> arr[i];
    }
cout<<endl<<"<<<<<<<<<<<_______________________________>>>>>>>>>>>>>>>>>>>"<< endl<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                max = i;
                k = arr[i];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    for (i = 0; i < max; i++)
    {
        sum = sum + arr[i];
    }
    cout<<endl<<"<<<<<<<<<<<_______________________________>>>>>>>>>>>>>>>>>>>"<<endl<<endl;

    cout << "Your max value = " << k << endl;
    cout  << "sum before max value = " << sum << endl;
    sum = 0;

    for (i = max + 1; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "sum after max value = " << sum;
        cout<<endl<<"<<<<<<<<<<<_______________________________>>>>>>>>>>>>>>>>>>>"<<endl<<endl;

    return 0;
}