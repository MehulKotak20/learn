#include<iostream>
using namespace std;
int a[100];
int top =-1;
void push(int y,int n)
{
  if(top>=n-1)
  {
    cout<<"/nthe stack is over-flow";
  }
  else
  {
    top++;
    a[top]=y;
  }
}
void pop()
{
    if(top>=0)
    {
    // cout<<"/nthe popped element is ="<<a[top]<<endl;
    top--;
    }
    else
    {
        cout<<"the stack is under-flow/n";
    }

}
int main()
{
  cout<<"developed by 22CE055"<<endl;
     string s;
     cout<<"enter =";
     cin>>s;
     int c=0;

     int l=s.length();
     
   
    for(int i=0;i<l;i++)
    {
      if(s.at(i)=='(' || s.at(i)=='['|| s.at(i)=='{' )
      {
        push(s.at(i),l);
        c++;
      }
      else 
      {
        if(s.at(i)==')')
        {
            if(a[top]=='(')
            {
                pop();
                c++;
            }
        }
         if(s.at(i)=='}')
        {
            if(a[top]=='{')
            {
                pop();
                c++;
            }
        }
         if(s.at(i)==']')
        {
            if(a[top]=='[')
            {
                pop();
                c++;
            }
        }


      }


    }
    if(top==-1 && l==c)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


}
