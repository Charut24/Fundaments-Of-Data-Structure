#include<iostream> 
using namespace std; 
   
#define MAX_size 10     // Maximum size of array or Dequeue 
   
// Deque class 
class Deque 
{ 
int  array[MAX_size]; 
int  front; 
int  rear; 
int  size; 
public : 
Deque(int size) 
{ 
front = -1; 
rear = 0; 
this->size = size; 
} 
   
    // Operations on Deque: 
void  insertfront(int key); 
void  insertrear(int key); 
void  deletefront(); 
void  deleterear(); 
void displayDeque();
int  getFront(); 
int  getRear(); 
     
    // Check if Deque is full
bool  isFull()
{
return ((front == 0 && rear == size-1)||front == rear+1);    
} 
    // Check if Deque is empty 
bool  isEmpty()
{
return (front == -1);  
}
}; 
   
// Insert an element at front of the deque
void Deque::insertfront(int key) 
{ 
if (isFull())  { 
cout << "Overflow!!\n" << endl; 
return; 
    } 
   
    // If queue is initially empty,set front=rear=0; start of deque 
if (front == -1)  { 
front = 0; 
rear = 0; 
    } 
else if (front == 0)              // front is first position of queue 
front = size - 1 ; 
else // decrement front 1 position 
front = front-1; 
   
array[front] = key ;            // insert current element into Deque
} 
   
// insert element at the rear end of deque 
void Deque ::insertrear(int key) 
{ 
if (isFull()) { 
cout << " Overflow!!\n " << endl; 
return; 
    } 
   
    //  If queue is initially empty,set front=rear=0; start of deque 
if (front == -1) { 
front = 0; 
rear = 0; 
    } 
else if (rear == size-1)               // rear is at last position of queue
rear = 0; 
else                            // increment rear by 1 position 
rear = rear+1; 
   
array[rear] = key ;         // insert current element into Deque
} 
   
// Delete element at front of Deque 
void Deque ::deletefront() 
{ 
if (isEmpty()) 
   { 
cout << "Queue Underflow!!\n" << endl; 
return ; 
    } 
   
    // Deque has only one element 
 if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else
        // back to initial position 
if (front == size -1) 
front = 0; 
   
else // remove current front value from Deque;increment front by 1
front = front+1; 
} 
   
// Delete element at rear end of Deque 
void Deque::deleterear() 
{ 
if (isEmpty()) 
    { 
cout << " Underflow!!\n" << endl ; 
return ; 
    } 
   
    // Deque has only one element 
if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else if (rear == 0) 
rear = size-1; 
else
rear = rear-1; 
} 
void Deque::displayDeque()
{
    int i;
    if(isEmpty())
      {
          cout<<"Queue Underflow!";
          return;
      }
    cout<<"\nQueue Elements: ";
    i=front;
    if(front<=rear)
      {
         while(i<=rear)
            {
                cout<<"\t"<<array[i++];
            }
      }
    else
    {
         while(i<MAX_size)
          {
              cout<<"\t"<<array[i++];
          }
          i=0;
          while(i<=rear)
           {
               cout<<"\t"<<array[i++];
           }
    }  
}
// retrieve front element of Deque 
int Deque::getFront() 
{ 
if (isEmpty())   { 
cout << " Underflow!!\n" << endl; 
return -1 ; 
    } 
return array[front]; 
} 
   
// retrieve rear element of Deque 
int Deque::getRear() 
{ 
if(isEmpty() || rear < 0)  { 
cout << " Underflow!!\n" << endl; 
return -1 ; 
    } 
return array[rear]; 
} 
   
//main program
int main() 
{ 
    int ele,opt,ch,size;
    cout<<"\nEnter size of the double ended queue: ";
    cin>>size;
    Deque DQ(size);
    do{
      cout<<"\nChoose:";
      cout<<"\n1.Display Queue elements";
      cout<<"\n2.Insert at front end";
      cout<<"\n3.Insert at rear end";
      cout<<"\n4.Delete from front end";
      cout<<"\n5.Delete from rear end";
      cout<<"\nEnter operation you want to perform on Double Ended Queue: ";
      cin>>opt;
      switch(opt)
       {
         case 1:
             DQ.displayDeque();
             break;

         case 2:
             cout<<"\nEnter element to insert at front: ";
             cin>>ele;
             DQ.insertfront(ele);
             break;
        
        case 3:
             cout<<"\nEnter element to insert at rear: ";
             cin>>ele;
             DQ.insertrear(ele);
             break;
        
        case 4: 
            DQ.deletefront();
            break;
        
        case 5:
            DQ.deleterear();
            break;

        default: 
            cout<<"\nInvalid choice!";
       }
      cout<<"\nEnter 1 to continue: ";
      cin>>ch;
    }while(ch==1);
    return 0;
}
