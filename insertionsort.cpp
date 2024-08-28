#include <iostream>
using namespace std;


void insertionsort(int array[]){

int key=0;
int j=0;
for (int i = 1; i < 5; i++)
{
    key=array[i];
    j=i-1;
    while (j>=0 && array[j]> key)
    {
        array[j+1]=array[j];
        j=j-i;
    }
    array[j+1]=key;
    

}

}
int main(){

    int array[5];
    cout<<"enter array";
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }

    cout<<"before sort";
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
        }

        insertionsort(array);
        cout<<"after sort";
        for (int i = 0; i < 5; i++)
        {
        cout<<array[i];
        }
        
    
}