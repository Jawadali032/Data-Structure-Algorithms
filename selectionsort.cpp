#include <iostream>
using namespace std;

void selectionsort(int arr[]){
    int min;
    for (int i = 0; i < 5; i++)
    {
        min =i;
        for (int j=i+1; j < 6; j++)
        {
           if (arr[j]<arr[i])
           {
            min=j;
           }
           
        }
        if (min!=i)
        {
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        
    }
    

};

int main()
{
    int myarr[6];
    cout<<"enter the integers"<<"  ";
    for (int i = 0; i < 6; i++)
    {
        cin>>myarr[i];
    }

    cout<<"unsorted array"<<"  ";
    for (int i = 0; i < 6; i++)
    {
        cout<<myarr[i]<<" "<<endl;
    }

    selectionsort(myarr);
    cout<<"sorted array"<<"  ";
    for (int i = 0; i < 6; i++)
    {
        cout<<myarr[i]<<"  "<<endl;;
    }
      
    
    
    return 0;
}
