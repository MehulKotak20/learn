#include<iostream>
using namespace std;

int bns(int a[],int h,int x)
{ int l=0,mid,f=0;
   while(l<=h)
   { 
    mid=(l+h)/2;

    if(x==a[mid])
    {
        cout<<endl<<"the index of given number="<<mid+1;
        f=1;
        return 0;
    }
    if(x<=a[mid])
    {
        h=mid-1;
    }
    if(x>=a[mid])
    { 
        l=mid+1;
    }
    

   }
   if(f==0)
   {
    cout<<endl<<"doesn't match any index";
   }

   

}

int main()
{
    int n,x;
     cout<<"developed by 22CE055"<<endl;
    
     cout<<"enter the number of element";
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++)
{   cout<<endl;
    cout<<"element a["<<i+1<<"]=";
    cin>>a[i];
}
 for(int i=0;i<n;i++)
{
     cout<<endl<<"element a["<<i+1<<"]="<<a[i];
    
}
cout<<endl<<"enter the numer for search=";
cin>>x;
bns(a,n,x);


}
    

