#include <iostream> 
using namespace std;

 int bin_src(int a[],int n,int k,int l,int h) 
{
     int mid; mid=(l+h)/2; 
     
     if(l==h) 
{ 
 

return -1; 
} 
  if (a[mid]==k) 
{ 
    return mid; 
} 
 
 else if (a[mid]>k) 
{
     bin_src(a,n,k,l,mid-1); 
}
 else if (a[mid]<k) 
{ 
bin_src(a,n,k,mid+1,h); 
} 
 
 
} 
 
 
int main()
{ 
    cout<<"developed by 22CE055"<<endl;
    int a[10],n,key,index,l=0,h;
     cout<<"Enter size of array: "; 
     cin>>n;
      h=n-1;
      cout<<"Enter array elements in sorted way: ";
 for (int i = 0; i < n; i++) 
{ cin>>a[i]; }
 cout<<"Enter key element: "; 
 cin>>key; 
  index=bin_src(a,n,key,l,h);
 if (index!=-1) 
{
     cout<<"Element is present at "<<index<<" index"; 
}
else 
{ 
    cout<<"Element not present"; 
} 
 return 0; 
} 
