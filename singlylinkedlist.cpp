#include<iostream>
using namespace std;
class node{
    public:
    int key;
    int data;
    node* next;

    node(){
        int key =0;
        int data =0;
        next=NULL;

    }
    node(int k,int d){
        key =k;
        data=d;
    }

};

class singlylinkedlist{
    public:
    node *head;
    
     singlylinkedlist(){
        head=NULL;

    }
    singlylinkedlist(node *n){
        head=n;
    }
    node* nodeexist(int k){
        node* temp = NULL;
        node* ptr= head;
        while (ptr!=NULL)
        {
        if(ptr->key==k){
            temp=ptr;
        }
        ptr=ptr->next;
        }
        return temp;
        
    }
    void nodeappend(node *n){
        if(nodeexist(n->key)!=NULL){
            cout<<"node already exist"<<endl;

        }
        else {if (head==NULL)
        { 
            head=n;
            cout<<"node appended"<<endl;
        }
        else{
        node* ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=n;
        cout<<"node appended"<<endl;
         } }       

    }
    void prependnode(node* n){
        if(nodeexist(n->key)!=NULL){
            cout<<"node already exist with the key vLue"<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"node appended"<<endl;
        }

    }

    void deletenode(int k){
        if (head==NULL)
        {
            cout<<"singly link list is empty"<<endl;

        }
        else if (head!= NULL)
        {
            if (head->key==k)
            {
                head=head->next;
                            }
            else {
                node *temp=NULL;
                node *prevptr=head;
                node *currptr=head->next;
                while (currptr!=NULL)
                {
                if (currptr->key==k)
                {
                    temp=currptr;
                    currptr=NULL;
                }
                else{
                    prevptr=prevptr->next;
                    currptr=currptr->next;
                }
                
                }
                
            if (temp!=NULL)
            {
                prevptr->next=temp->next;
                cout<<"node deleted with key value";
            }
            else{
                cout<<"no node exist with keyvalue";

            }
            }


        }
        
        
        
           
        
        
        }
        

    };
int main() {

  singlylinkedlist s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    node * n1 = new node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.nodeappend(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependnode(n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deletenode(k1);

      break;
 

    }}
  while (option != 0);

  return 0;
}
