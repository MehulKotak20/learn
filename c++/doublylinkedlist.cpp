#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *linkl;
    struct node *linkr;
} *R = NULL,*L=NULL;

struct node *create(int x)
{
    struct node *new1;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = x;
    new1->linkl = NULL;
    new1->linkr=NULL;

    return new1;
};

void insertend(int x)
{
    struct node *temp;
    temp = create(x);

    if (L==NULL && R==NULL)
    {
       R=temp;
        L=temp;

    }
    else
    {
        R->linkr=temp;
        temp->linkl = R;
        R = temp;
    }
}
void dend()
{ 
//    if(R==NULL)
//    {
//     cout<<"over-flow";
//    }
//    else{
 struct node*t;
 t=R;
 

R=R->linkl;
t->linkl=NULL;
R->linkr=NULL;
   }

// }
void dfront()
{ 
    //  if(L==NULL)
    // {
    //     cout<<"under-flow";
    // }
    // else{
 struct node*t;
 t=L;

L=L->linkr;
t->linkr=NULL;
L->linkl=NULL;
    
}
void insertfront(int x)
{
    struct node *temp;
    temp = create(x);

    if (L==NULL && R==NULL)
    {
       R=temp;
        L=temp;

    }
    else
    {
        L->linkl=temp;
        temp->linkr = L;
        L = temp;
    }
}
void insertran(int x,int z)
{
    struct node *temp=create(z);
    struct node *t=L;
   struct node *t1;
   if(x==L->data)
   {
    insertfront(x);
   }
   if(x==R->data)
   {
    insertend(x);
   }
 else
   
  while(t->data!=x)
  {
    t=t->linkr;

  }
 temp->linkr=t->linkr;
 temp->linkr->linkl=temp;
 temp->linkl=t;
 t->linkr=temp;

  
 



}
void display()
{
    struct node *D;
    D=L;
    do
    {
        cout<<"the element"<<D->data<<endl;
        D=D->linkr;

        
    } while (D!=NULL);
    
}

int main()
{
   int x, k,z;
   cout<<"Program in done by 22CE055"<<endl;
    do
    {
        cout << "/nMenu" << endl;
        cout << "1.insert end" << endl;
        cout << "2.delete end" << endl;
        cout << "3.insert front" << endl;
        cout << "4.delete front" << endl;
        cout << "5.display" << endl;
         cout << "6.insert after data " << endl;
        cout << "7.exit" << endl;

        cout << "enter number which function want to use=";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "enter elemet to insert end=";
            cin >> k;
            insertend(k);

            break;

        case 2:
            dend();
            
            break;
        case 3:
            cout << "enter elemet to insert front=";
            cin >> k;
            insertfront(k);

            break;
        case 4:
            dfront();
            break;
       
        case 5:
            display();
            break;
         case 6:
         cout<<"enter data after insert";
         cin>>z;
         cout << "enter elemet to insert K=";
            cin >> k;


         insertran(z,k);
         break;
      
        case 7:
            exit(0);
            break;
        }
    } while (x != 7);



}