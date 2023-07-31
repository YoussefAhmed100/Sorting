#include <iostream>
#include<algorithm> 
using namespace std;

void BubbleSort(int arr[],int n)
{
    bool flag=true;
  
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++) //swap
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]); //ready function
                flag=false;
            }
              
        }
          if(flag==true){
            cout<<"the array is sorted"<<endl;
                  break;
          } //
  
          
    
    }
  
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t" ;
      
    }
    cout<<endl;


}
  int main(){
    int arr[]={20,3,40,5,60};
    int n=sizeof(arr)/sizeof(arr[0]);

     BubbleSort( arr, n);
     print(arr,n);













    return 0;
  }

