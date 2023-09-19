#include <bits/stdc++.h>
using namespace std;
int main()
    {
       int n,k,x;
        cout<<"enter the number of array=";
        cin>>n;
        cout<<"enter the key=";
        cin>>k;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cout<<"enter the value= ";
            cin>>a[i];
        }

        for(int i=0;i<(n-k+1);i++)
        { unordered_set<int> s;
            for(int j=i;j<k+i;j++)
            {
                s.insert(a[j]);
            }
           x= s.size();
           cout<<x;
        }
    }
