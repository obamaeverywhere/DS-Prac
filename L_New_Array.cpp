#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c.push_back(A[i]);
    }
    for (int i = 0; i < 2 * n; i++)
    {
        cout << c[i] << " ";
    }
}