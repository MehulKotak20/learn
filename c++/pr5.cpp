#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
     cout<<"developed by 22CE055"<<endl;
	int n;
	int a;
    cout<<"Enter number of stics:";
    cin>>n;
    vector<int>v ;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int k=0;
    int s=0,count=0;
    for(int i=n-1;i>0;i--)
    {
        if(v[i]==v[i-1])
        {
            if(count==0)
            {
                k=v[i];
            }
            if(count==1)
            {
                s=v[i];
            }
            count++;
        }

    }
    if(count==0)
    {
        cout<<"not possible";
    }
    else
    {
        cout<<"Maximum area is "<<k*s;
    }

	return 0;
}