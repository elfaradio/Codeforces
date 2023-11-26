// Hey I am  Darth_Farhad..aka Farhadul Islam
// Either way a new day is coming whether we like it or not   -^-
//  The question is will you control it or will it control you  __ Klaus Mikaelson

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define um unordered_map
#define us unordered_set
void solve()
{
  int n;
  cin >> n;
  set<pair<string, string>> s;

  for (int i = 0; i < n; i++)
  {
    string s1, s2;
    cin >> s1 >> s2;
    s.insert(make_pair(s1, s2));
  }
  cout << s.size() << endl;
}
int main()
{

  solve();

  return 0;
}

// Gooooooooooooooooooooodbye          Happy Coding
