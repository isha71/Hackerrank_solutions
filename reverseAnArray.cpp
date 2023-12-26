#include <iostream>
using namespace std;
int main()
{
    int N;
    // cout << "Enter size" << endl;
    cin >> N;
    int array[N];
    // cout << "Enter array" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << array[i];
    //     cout << " ";
    // }
    // cout << endl;
    int loopCount = 0;
    if (N % 2 == 0)
    {
        loopCount = N / 2;
    }
    else if (N % 2 == 1)
    {
        loopCount = (N - 1) / 2;
    }

    int prevStore = 0;
    for (int i = 0; i < loopCount; i++)
    {
        prevStore = array[i];
        array[i] = array[N - (i + 1)];
        array[N - (i + 1)] = prevStore;
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i];
        cout << " ";
    }
}