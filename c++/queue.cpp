#include<iostream>
using namespace std;
int a[100];
int rear =-1,front=-1;
void Qenqueue(int y,int n)
{
  if(rear>=n-1)
  {
    cout<<"/nthe stack is over-flow";
  }
  else
  {
    rear++;
    a[rear]=y;
  }
  if(front==-1)
  {
    front=0;
  }
  
}
int dequeue(int y)
{
   
     if(front==-1)
    {
        cout<<" under-flow/n";
        return 0;

    }
    y=a[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else{
        front++;
        return y;
    }


}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
   cout<<"developed by 22CE055";
int x,y,n;
cout<<"enter the size of queue=";
cin>>n;
do
{
    cout<<"/nMenu"<<endl;
    cout<<"1.insert"<<endl;
    cout<<"2.delet"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.exit"<<endl;

    cout<<"enter number which function want to use=";
    cin>>x;
    switch (x)
    {
    case 1:
   
    cin>>y;
    Qenqueue(y,n);
     break;
    case 2:
    dequeue(y);
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