#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cout << "enter the n"
         << "\n";
    cin >> n;
    int arr[n][n];
    cout << "enter the " << n << " x " << n << "array"
         << "\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}