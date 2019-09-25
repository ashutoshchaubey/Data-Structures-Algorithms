#include <iostream>
using namespace std;
// void removeDuplicates(string s, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[i] == s[j])
//             {
//                 char temp = s[j];
//                 s[j] = s[j + 1];
//                 cout << s;
//             }
//         }
//     }
// }
int main()
{
    int count = 0;
    int temp = 0;
    int arr[] = {1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = 0;
            }
        }
        cout << arr[i] << " ";
    }
    cout << "\n";
    bool dup = false;
    for (int i = 0; i < n; i++)
    {
        dup = false;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[i] == arr[j])
            {
                dup = true;
            }
        }
        if (dup == false)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}