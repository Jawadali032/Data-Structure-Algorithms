#include <iostream>
using namespace std;

void bubblesort(int a[]){
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j< 5-i-1; j++)
        {
        if (a[j]>a[j+1])
        {
            int temp =a[j];
            a[j]=a[j+1];
            a[j+1]= temp;
        }
        
        }
        
    }
    
}
int main()
{
    int array[5];
    int size;
    cout<<"enter array";
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }

    bubblesort(array);
    cout<<"after sorting"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i];
    }
    

    

    

    return 0;
}
