#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    string arr = "aaaabbbccaabba";
    int temp = 0;
    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            cout << arr[i] << count;
            count = 1;
        }
    }
    cout << "\n";
    return 0;
}