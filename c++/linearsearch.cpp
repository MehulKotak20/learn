#include<iostream>
using namespace std;

int lns(int a[],int n,int x)
{ int f=0;
 for(int i=0;i<n;i++)
 {
   
    if(a[i]==x)
    {   
        f++;
        cout<<endl<<"the given number in index="<<i+1;

        
    }
 }
 if(f==0)
 {
    cout<<endl<<"doesn't match any element";
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
lns(a,n,x);


}
    

