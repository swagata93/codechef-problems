#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int houses[101]={0};
        int x,y,m;
        cin>>m>>x>>y;
        vector<int> v(m);
        for(int i=0; i<m; i++)
            cin>> v[i];
        int t=x*y; //houses covered in one direction
        //int remaining=100-m;
        for(int i=0; i<m; i++){
            houses[v[i]]=1;
            if(t>=v[i]){
                for(int j=1; j<=v[i]; j++)
                    houses[j]=1;
            }
            else{
                for(int j=v[i]; j>=v[i]-t; j--)
                    houses[j]=1;
            }
            if(v[i]+t>=100){
                for(int j=v[i]; j<=100; j++)
                    houses[j]=1;
            }
            else{
                for(int j=v[i]; j<=v[i]+t; j++)
                    houses[j]=1;
            }
        }
        int res=0;
        for(int i=1; i<=100; i++)
            if(houses[i]==0)
                res++;
        cout<< res << "\n";
    }
    return 0;
}
