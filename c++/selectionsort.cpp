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
   for(int i=0;i<n;i++)
   {
    int small=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[small]>a[j])
        {
            small=j;
                  }
      
    }  
    if(i!=small)
    {    
        s=a[i];
        a[i]=a[small];
        a[small]=s;
    }
     }
    
     for(int i=0;i<n;i++)
 {
    cout<<a[i];
 }



}