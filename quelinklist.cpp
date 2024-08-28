#include <iostream>
using namespace std;


class node{
    public:

    int key;
    int data;
    node* next;

    node(){
    int key =0;
    int data=0;
    next =NULL;
    }
 
  node(int k, int d){
    int key =k;
    int data = d; 
     }

  
};

class que{
    public:
    node *front;
    node *rear;

    que(){
        front =NULL;
        rear  =NULL;
    }
    bool isempty(){
        if (front && rear==NULL)
        {
            return true;
        }
        else 
        return false;
        
    }

    void enque(node* n){

        if (isempty())
        {
          front = n;
          rear = n;
        }
        else
        rear->next=n;
        rear=n;
        
    }

};