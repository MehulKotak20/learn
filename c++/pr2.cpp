#include<iostream>
using namespace std;

void knapsack(int n,int c,int k,int a[])
{
  int max=0;
for(int i=0;i<n;i++)
{
    int f=0;
     int b=0;
      for(int j=i;j<n;j++)
      {
       
        b+=a[j];
       f++;
        if(b<=c && b>=k)
        {
            
            if(f>max )
            {
                max=f;
            }
            
        }
          if(b>c)
            {
                break;
            }
      }
    }

 cout<<max;
}

int main()
  {    
    cout<<"developed by 22CE055"<<endl;
    int n,k,c;
    cout<<"enter n,c,k=";
    cin>>n>>c>>k;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }


     knapsack(n,c,k,a);


    }
