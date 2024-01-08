#include <iostream>
using namespace std;
  

void insertionSort(int arr[], int n)
{
    int i, k, j;
 
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k)
        {   
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
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
    insertionSort(randArray, a);
       for(int i=0;i<a;i++){
        cout<<randArray[i]<<",";
    }
 
    return 0;
}