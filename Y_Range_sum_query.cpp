#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=0;
            for(int j=l-1;j<r;j++){
                sum+=v[j];
            }
        cout<<sum<<endl;
    }
}