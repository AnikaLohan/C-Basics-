#include <iostream>
using namespace std;
  

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){                     
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
  

int main()
{
    

    int a;
    cout<<"enter size of the array";
    cin>>a;
    int randArray[a];
    // doubt : int a = sizeof(array1) / sizeof(array1[0]);
    cout<<"before sorting:"<<endl;
    for(int i=0;i<a;i++){
        cout<<randArray[i]<<",";
    }
    cout<<"after sorting"<<endl;
    bubbleSort(randArray, a);
       for(int i=0;i<a;i++){
        cout<<randArray[i]<<",";
    }
 
    return 0;
}