#include <iostream>
using namespace std;

void isSubstring(string s1, string s2, int n1, int n2)
{
    int temp = s1[0], i;
    for (i = 0; i < n1 - 1; i++)
    {
        s1[i] = s1[i + 1];
    }
    s1[i] = temp;
}

int main()
{
    string s1 = "waterbottle";
    int n1 = s1.length();
    string s2 = "erbottlewat";
    int n2 = s2.length();
    isSubstring(s1, s2, n1, n2);
    return 0;
}