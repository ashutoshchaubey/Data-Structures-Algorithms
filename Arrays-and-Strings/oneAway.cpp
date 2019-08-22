#include <iostream>
using namespace std;

bool checkOneAway(string s1, string s2, int len1, int len2)
{
    bool check = true;
    int j = 0;
    int count = 0;
    int diff = len2 - len1;
    if (diff == 0)
    {
        for (int i = 0; i < len1; i++, j++)
        {
            if (s1[i] != s2[j])
            {
                if (count == 1)
                {
                    check = false;
                    break;
                }
                else
                {
                    count++;
                }
            }
        }
    }
    return check;
}

int main()
{
    string s1 = "pale";
    int len1 = s1.length();
    string s2 = "sble";
    int len2 = s2.length();
    if (checkOneAway(s1, s2, len1, len2))
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