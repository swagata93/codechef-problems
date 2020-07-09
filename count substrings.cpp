#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>> str;
        ll cnt[n]={0};
        ll lastOne=0;
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                cnt[i]+=cnt[lastOne]+1;
                lastOne=i;
            }
        }
        ll res=0;
        for(int i=0; i<n; i++)
            res+=cnt[i];
        cout<< res << "\n";
    }
    return 0;
}
