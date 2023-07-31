#include <iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    int temp;
    int j;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];//1
        j=i-1;
        while(j>=0 && arr[j]>temp)//condetion
        {
            arr[j]=arr[j+1]; //shifting
            j=j-1;
        }
        arr[j+1]=temp;



    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
        
    }
    cout<<endl;
}
int main(){

    int arr[]={20,15,10,30,25,40,5};
    int n =sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    printArr(arr,n);










    return 0;
}