#include<iostream>
using namespace std;

struct node
{
    int data;

     struct node* link;
}*head=NULL;

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

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
      temp->link=head;
      head=temp;


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
    void pop()
    {
   
    if(head==NULL)
    {
        return;
    }
    else{
          
          head=head->link;
        
    }


    }

int main()
{
  cout<<"developed by 22CE055"<<endl;
  insert(10);

  insert(20);
  insert(30);
    pop();
  display();

}