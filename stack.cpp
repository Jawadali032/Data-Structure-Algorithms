#include<iostream>
#include<string>

using namespace std;

class stack{
    private:
    int top;
    int array[5];
    public:

    stack(){
        top=-1;
        for (int i = 0; i < 5; i++)
        {
            array[i]=0;
        }
    }

        bool isempty(){
        
            if(top==-1)
            return true;
            else
            return false;}
        
        bool isfull(){
            if(top==4)
                return true;
            else
                return false;
        }
         void push(int val){
             if (isfull())
             cout<<"the stack is overflow"<<endl;
             else
                top++; // the index postion will increase from -1 to 0 
                array[top]=val; // the value will save in the index where the top will point 

         }
         int pop(){
             if (isempty()){
                 cout<<"tack underflow"<<endl;
                 return 0;}
            else
              { int popvalue = array[top];//it will point to the index of top (stack)
                array[top]=0;//it will empty the stack by putting 0 in it again
                top--;//it will decrease the stack index value 
                return popvalue ;}
             
            }
             int count(){
                return top+1;
         }
         int peek(int pos){
             if (isempty()){
                 cout<<"stack undeflow"<<endl;
                 return 0;}
            else    {
                return array[pos];}
             }
             
         
             int change(int pos , int value){
                 array [pos]=value;
                 cout<<"value change at positon"<<endl;
                 return 0;
             }
             void display(){
                 cout<<"display the all value of stack"<<endl;
                 for (int i = 4; i < 0; i--)
                 {
                    cout<<array[i]<<endl;
                 }
             }
                 
             
         
};
int main()
{
    stack s1;
    int option , position,value;
    do
    {
        cout<<"what are operation u want to call"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.isempty"<<endl;
        cout<<"4.isfull"<<endl;
        cout<<"5.peek"<<endl;
        cout<<"6.count"<<endl;
        cout<<"7.change"<<endl;
        cout<<"8.display"<<endl;
        cout<<"9.clear screen"<<endl;

        cin>>option;
        switch(option)
        {
            case 1:
            cout<<"enter the value to push"<<endl;
            cin>>value;
            s1.push(value);
            break;
            case 2:
            cout<<"pop function call - value is poped"<<s1.pop()<<endl;
            break;
            case 3:
            cout<<"stack is empty"<<s1.isempty()<<endl;
            break;
            case 4:
            if (s1.isfull())
            cout<<"stack is full"<<s1.isfull()<<endl;
            else
            cout<<"stack is not full"<<endl;
            break;
            case 5:
            cout<<"enter the position you want to peek"<<endl;
            cin>>position;
            cout<<"peek functon called"<<s1.peek(position)<<endl;
            break;  
            case 6:
            cout<<"count function is called - the count number is"<<s1.count()<<endl;
            break;
            case 7:
            cout<<"change function is called"<<endl;
            cout<<"select position you want to change"<<endl;
            cin>>position;
            cout<<"enter the value you want to change"<<endl;
            cin>>value;
            s1.change(position , value);
            break;
            case 8:
            cout<<"display function is called"<<endl;
            s1.display();
            break;

        }
    }while(option!=0);
    return 0;

}