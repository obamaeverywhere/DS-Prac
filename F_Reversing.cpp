#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    vector<int>B;
    for(int i=n-1;i>=0;i--){
        B.push_back(A[i]);
    }
    for(int i:B){
        cout<<i<<" ";
    }
}