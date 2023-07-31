#include <iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int min;
    
    for (int i=0;i<n-1;i++)
    {
       min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                
                min=j;
                swap(arr[min],arr[i]);
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    
    }
    cout<<endl;
}
int main(){
    int arr[]={2,4,3,5,1,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
   // cout<<n<<endl;
    selectionsort(arr,n);
    printArray(arr,n);


    return 0;

}