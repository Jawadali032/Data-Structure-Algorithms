#include<iostream>
#include<stack>

using namespace std;

bool isoperator(char c){    
    if(c=='*'||c=='/'||c=='+'||c=='-'||c=='^')
    {
        return true;
    }
    else
    return false;
}

char precedence(char c){
    if(c=='*'&& c=='/')
    return 3;
    else if(c=='+'&&c=='-')
    return 2;
    else if(c=='^')
    return 1;
    else return -1;
}

string infixtopostfix(stack<char> s, string infix){

    string postfix;
    for (int i = 0; i < infix.length(); i++){
    if((infix[i]>='a'&& infix[i]<='z'|| infix[i]>='A' && infix[i]<='Z'))
    {
    postfix+=infix[i];
    }
     
    else if(infix[i]=='(')
     {
        s.push(infix[i]);
     }
     else if (infix[i]==')'){
     while (s.top()!='('&& (!s.empty())) 
     {
       char temp =s.top();
        postfix+=temp;
        s.pop();
     }
       if (s.top()=='(')
     {
        s.pop();
     }
     }
     else if(isoperator(infix[i]))
     {
        if(s.empty()){
        s.push(infix[i]);
        }     
        else
        {
            if (precedence(infix[i])>precedence (s.top()))
            {
                s.push(infix[i]);
            }
            else if (precedence (infix[i])== precedence (s.top()) && '^')
            {
                s.push(infix[i]);
            }
            else{
                 while((!s.empty())&&(precedence(infix[i])<= precedence(s.top())))
                 {
                    char temp= s.top();
                    postfix+= temp;
                    s.pop();
                  }
                      s.push(infix[i]);
                }
            }
        }       
    }     
    while (!s.empty())
    {
        postfix+= s.top();
        s.pop();
    }
    return postfix;   
    
}

int main()
{
    string infix,postfix;
    cout<<"enter the infix expression"<<endl;
    cin>>infix;
    stack<char>s;
    postfix=infixtopostfix(s,infix);
    cout<<"the postfix exp is"<<postfix<<endl;


    return 0;
}