#include <iostream>
using namespace std;

int main()
{
    bool unique = true;
    string text;
    cin >> text;
    int n = text.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (text[i] == text[j])
            {
                cout << "match found at " << i << " and " << j << " not unique "
                     << "\n";
                unique = false;
                break;
            }
        }
    }
    if (unique)
    {
        cout << "unique string "
             << "\n";
    }

    return 0;
}