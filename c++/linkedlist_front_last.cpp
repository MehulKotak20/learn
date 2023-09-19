#include <iostream>
using namespace std;

struct node
{
    int data;

    struct node *link;
} *head = NULL;

struct node *create(int x)
{
    struct node *new1;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = x;
    new1->link = NULL;

    return new1;
};

void insert(int x)
{
    struct node *temp;
    temp = create(x);

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->link = head;
        head = temp;
    }
}
void display()
{
    struct node *lnk = head;

    while (lnk != NULL)
    {
        cout << "data=" << lnk->data << endl;
        cout << "add=" << lnk->link << endl;
        lnk = lnk->link;
    }
}
void pop()
{

    if (head == NULL)
    {
        return;
    }
    else
    {

        head = head->link;
    }
}
void front(int x)
{
    struct node *temp1;
    struct node *t1 = head;

    temp1 = create(x);
    while (t1->link != NULL)
    {
        t1 = t1->link;
    }

    t1->link = temp1;
}
void del_front()
{
    struct node *prd;
    struct node *t1 = head;

    while (t1->link != NULL)
    {
        prd = t1;
        t1 = t1->link;
    }

    prd->link = NULL;
}
void last(int x)
{
    struct node *temp2;
    temp2 = create(x);
    temp2->link = head;
    head = temp2;
}
void del_last()
{
    head = head->link;
}

void del_all()
{
    while(head!=NULL)
    {
        head=head->link;
    }
}
int main()
{
    int x, k;
   cout<<"Program in done by 22CE055"<<endl;
    do
    {
        cout << "/nMenu" << endl;
        cout << "1.insert" << endl;
        cout << "2.pop" << endl;
        cout << "3.insert front" << endl;
        cout << "4.delete front" << endl;
        cout << "5.insert end" << endl;
        cout << "6.delete end" << endl;
        cout << "7.display" << endl;
       cout << "8.delete all" << endl;
        cout << "9.exit" << endl;

        cout << "enter number which function want to use=";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "enter elemet to insert=";
            cin >> k;
            insert(k);

            break;

        case 2:
            pop();
            break;
        case 3:
            cout << "enter elemet to insert front=";
            cin >> k;
            front(k);

            break;
        case 4:
            del_front();
            break;
        case 5:
            cout << "enter elemet to insert last=";
            cin >> k;
            last(k);

            break;
        case 6:
            del_last();
            break;
        case 7:
            display();
            break;
        case 8:
        del_all();
        break;
        case 9:
            exit(0);
            break;
        }
    } while (x != 9);

}
