#include<iostream>
using namespace std;


int main()
{
    
    cout<<"developed by 22CE055"<<endl;
   int n,s;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++)
   {
    cout<<"enter element a["<<i<<"]=";
    cin>>a[i];
   }
   for(int i=2;i<=n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
           
        }
        a[j+1]=key;
        
    }
    for(int i=1;i<=n;i++)
 {
    cout<<a[i];
 }
}
