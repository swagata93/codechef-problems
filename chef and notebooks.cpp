#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        vector<int> pages(n);
        vector<int> cost(n);
        for(int i=0; i<n; i++){
            cin>> pages[i] >> cost[i];
        }
        bool res=false;
        for(int i=0; i<n; i++){
            if(pages[i]+y>=x && cost[i]<=k) res=true;
        }
        if(res) cout<< "LuckyChef\n";
        else cout<< "UnluckyChef\n";
    }
    return 0;
}
