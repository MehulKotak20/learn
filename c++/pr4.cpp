int c1=0,c2=0,c3=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
           {
             c1++;
           }
           else
           {
               if(nums[i]==1)
               {
                   c2++;
               }
               else
               {
                   c3++;
               }
           }

       }
       for(int i=0;i<c1;i++)
       {
           nums[i]=0;
       }
       for(int i=0;i<c2;i++)
       {
           nums[c1+i]=1;
       }
       for(int i=0;i<c3;i++)
       {
           nums[c1+c2+i]=2;
       }
    }