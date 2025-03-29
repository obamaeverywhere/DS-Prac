#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (freq[i - 'a'] > 0)
            cout << char(i) << " " << ":" << " " << freq[i - 'a'] << endl;
    }
}