// //Implementation of Stack using Linked List (Linked Stack) #2(Completed)
// #include<iostream>
// using namespace std;

// class Node
//     {
//         public:
//         int data;
//         Node* next;
//         Node(int val)
//         {
//         data=val;
//         next=NULL;
//         }
//     };
// class List
// {
// Node* head;
// public:
// List()
// {
// head=NULL;
// }

// //isEmpty() function
// bool isEmpty(){
//     if(head==NULL)
//     {
//         return 1;
//     }
//     else
//     {
//     return 0;
//     }
// }
// //isFull() function
// bool isFull()
// {
// Node* temp = new Node(0);
// if(temp == NULL) //memeory allocate nai vayena since memory full xa
// {
// return 1;
// }
// delete temp;
// return 0;
// }

// //push() function
// void push(int val)
// {
// Node* newNode;
// newNode = new Node(val);
// newNode->next= head;
// head=newNode;
// }
// //pop() function
// void pop()
// {
// if(isEmpty() == 1)
// {
// cout<<"Stack underflow";
// return;
// }
// else
// {
// Node* temp = head;
// cout<<(temp->data)<<endl;
// head=head->next;
// delete temp;
// }
// }

// //display ll
// void display()
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"->";
//         temp= temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// };

// int main()
// {
//     List ll;
//     ll.push(5);
//     ll.push(6);
//     ll.push(7);
//     ll.push(8);
//     ll.push(9);
//     ll.display();
//     ll.pop();
//      ll.display();
    
// }

//Implementation of Queue using Linked List (Linked Queue) 
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
    data=val;
    next=NULL;
    }
};

class List
{
    public:
Node* head;
Node* tail;
List()
{
    head=tail=NULL;
}

void enqueue(int val)
{
    Node* newNode = new Node(val);
 if(head == NULL)
 {
    head=tail=newNode;
    return;
 }
 else
 {
    tail->next = newNode;
    tail=newNode;
 }
}

void dequeue()
{
    if(head==NULL){ //if queue is empty
    cout<<"Empty Queue";
    return;
    }
Node* temp;
if(head==tail)
{
temp = head;
cout<<"Dequeue value : "<<temp->data<<endl;
head=tail=NULL;
delete temp;
}
else
{
temp = head;
cout<<"Dequeue value : "<<temp->data<<endl;
head=head->next;
delete temp;

}
}

void display()
{
if(head==NULL)
{
cout<<"Empty List";
return;
}
else
{
Node* temp=head;
while(temp != NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
}
};
int main()
{
List ll;
ll.enqueue(1);
ll.enqueue(2);
ll.enqueue(3);
ll.enqueue(4);
ll.enqueue(5);
ll.display();
ll.dequeue();
ll.display();
ll.dequeue();
ll.display();
ll.dequeue();
ll.display();
}