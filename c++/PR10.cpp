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
    cout<<"/nthe popped element is ="<<a[top]<<endl;
    top--;
    }
    else
    {
        cout<<"the stack is under-flow/n";
    }

}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
int x,y,n;
cout<<"Program in developed by 22CE055"<<endl;
cout<<"enter the size of stack=";
cin>>n;
do
{
    cout<<"/nMenu"<<endl;
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.exit"<<endl;

    cout<<"enter number which function want to use=";
    cin>>x;
    switch (x)
    {
    case 1:
    cout<<"enter the element which you want to push=";
    cin>>y;
    push(y,n);
     break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    default:
    exit(0);
        break;
    } 
   } while (1);

}