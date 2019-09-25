#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << arr[i] << "\n";
        }
    }
    return 0;
}