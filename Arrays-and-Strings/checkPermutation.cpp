#include <iostream>
using namespace std;

bool arePermutations(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 != n2)
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    if (arePermutations(s1, s2))
    {
        cout << "String 2 is a permutation of string 1"
             << "\n";
    }
    else
    {
        cout << "Strings are not permutation of each other"
             << "\n";
    }
    return 0;
}