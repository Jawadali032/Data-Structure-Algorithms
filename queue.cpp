#include<iostream>
using namespace std;

class Queue{
    private:
    int rear;
    int front;
    int arr[5];

    public:
    Queue(){
        rear=-1;
        front=-1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
        
    }

    bool isempty(){
        if(rear== -1 && front==-1)
             return true;
        else
             return false;

    }

    bool isfull(){
        if(rear == 4)
          return true;
        else
            return false;
    }

    void enqueue(int val){
        if(isfull()){
            cout<<"queue is FULL"<<endl;
            return ;}
        else if(isempty()){
            rear=0;
            front=0;
            arr[rear]=val;
            }
         else{
                rear++;
                arr[rear]=val;
            }
        
    }
    int dequeue(){
        int x;
        if(isempty()){
            cout<<"que is empty"<<endl;
            return 0;
            }
        else if(front==rear){
            x=arr[front];
            front=0;
            front=-1;
            rear=-1;
            return x;
        }
        else{
            front=0;
            front++;        
            return x;
            }           
    }

    int count(){
        return (rear-front+1);
    }
    void display(){
        cout<<"all value of queue"<<endl;
        for ( int i = 0; i < 5; i++)
        {
            cout<<arr[i]<<"";
        }
        
    }
};

int main(){

    Queue q1;
    int option;
    int value;
    do{
        cout<<"what function do you want to call . enter 0 to  exit"<<endl;
        cout<<"1. isempty()"<<endl;
        cout<<"2. is full()"<<endl;
        cout<<"3, enqueue()"<<endl;
        cout<<"4. dequeue()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. display()"<<endl;

        cin>>option;
        switch(option)
        {
        case 1:
        if(q1.isempty())
        cout<<"its is empty"<<endl;
        else
        cout<<"it is not empty"<<endl;
        break;
         case 2:
        if(q1.isfull())
        cout<<"it is full"<<endl;
        else
        cout<<"its is not full"<<endl;
        break;
        case 3:
        cout<<"enqueue operation called .... enter the value to enqueue"<<endl;
        cin>>option;
        q1.enqueue(value);
        break;
        case 4:
        cout<<"the value has been dequeued"<<endl;
        q1.dequeue();
        case 5:
        cout<<"show the count of queue"<<q1.count()<<endl;
        case 6:
        cout<<"display all the values in queue"<<endl;
        q1.display();
       }
        }
       while(option!=0);
       return 0;
}
