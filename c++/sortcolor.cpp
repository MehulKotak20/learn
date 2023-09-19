#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    void sortColors(int nums[],int size) {
       
       int low=0;
       int mid=0;
       int high=size-1;
       for(int i=0;i<size;i++)
       {
           if(nums[mid]==0)
           {
               swap(nums[low],nums[mid]);
               low++;
               mid++;
           }
           else if(nums[mid]==2)
           {
               swap(nums[high],nums[mid]);
               high--;

           }
           else
           {
               mid++;
           }
       }
       for(int i=0;i<size;i++)
{
     cout<<endl<<"element a["<<i+1<<"]="<<nums[i];
    
}
    }
       
};

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
Solution s;
s.sortColors(a,n);
 

}