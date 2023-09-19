#include<iostream>
using namespace std;

struct node
{
    int data;

     struct node* link;
}*head=NULL,*frnt=NULL;

struct node * create(int x)
{
    struct node * new1;

    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=x;
    new1->link=NULL;

    return new1;
};

void insert(int x)
{
    struct node* temp;
    temp=create(x);
    int i=0;

    if(head==NULL)
    {
        head=temp;
        frnt=temp;

    }
    else
    {
      head->link=temp;
      head=temp;
    //   if(i<1)
    //   {
    //     frnt->link=temp;
    //   }
    //     i++;

    }
}

  void pop()
    {
   
    if(head==NULL)
    {
        return;
    }
    else{
          
          frnt=frnt->link;
           
    }


    }
    
void display()
{
    struct node *lnk=head;
   
  while(lnk!=NULL){
 cout<<"data="<<lnk->data<<endl;
 cout<<"add="<<lnk->link<<endl;
 lnk=lnk->link;
  }
}

int main()
{
  insert(10);
  pop();
  insert(20);
  insert(30);
  
  display();

}
