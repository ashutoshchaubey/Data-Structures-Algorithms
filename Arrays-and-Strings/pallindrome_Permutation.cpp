#include <iostream>
using namespace std;

bool checkPallindrome(string str, string s2, int len)
{
    int j = 0;
    bool pal = true;
    while (j < len)
    {
        for (int i = len - 1; i >= 0; i--, j++)
        {
            if (str[j] != s2[i])
            {
                pal = false;
            }
        }
    }

    return pal;
}

int main()
{
    string str = "my dog";
    int len = str.length();
    string s2 = "god ym";
    int len2 = s2.length();
    if (len != len2)
    {
        cout << "not pallindrome";
    }
    bool result = checkPallindrome(str, s2, len);
    if (result)
    {
        cout << "yes"
             << "\n";
    }
    else
    {
        cout << "no"
             << "\n";
    }
    return 0;
}