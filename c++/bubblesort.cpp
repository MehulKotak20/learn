#include<iostream>
using namespace std;

int main()
{
    cout<<"developed by 22CE055"<<endl;
   int n,s;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cout<<"enter element a["<<i<<"]=";
    cin>>a[i];
   }

   for(int i=0;i<n-1;i++)
   {
    int cnt=0;
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1])
        {
            s=a[j];
            a[j]=a[j+1];
            a[j+1]=s;
            cnt++;

        }
    }
    if(cnt==0)
    {
        break;
    }

   }
 for(int i=0;i<n;i++)
 {
    cout<<a[i];
 }



}