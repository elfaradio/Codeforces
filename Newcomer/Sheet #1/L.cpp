#include <bits/stdc++.h>
using namespace std;
int main()
{
    string firstname1, firstname2, secondname1, secondname2;
    cin >> firstname1 >> secondname1 >> firstname2 >> secondname2;

    if (secondname1 == secondname2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }
}
