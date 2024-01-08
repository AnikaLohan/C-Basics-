#include <iostream>
#include <fstream>
using namespace std;
/*
int insertion_sort(int arr[] , int n){
    int pass = 0;
    for(int i=0 ; i<n-1 ; i++){
        int j = i+1;
        cout<<endl;
        cout<<i+1<<"pass"<<endl;
        while(arr[j] < arr[j-1] && j > 0){
            cout << "swapped " << arr[j] << " and " << arr[j-1]<<endl;
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            pass++;
            j--;
        }
        pass++;
    }
    for(int i=0 ; i<n ; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    return pass;
}
int main(){
    ofstream out("InsertionSort.txt");

    for(int i=1 ; i<=20 ; i++){
        int arr[i];
        for(int j=0 ; j<i ; j++){
            arr[j] = i-j;
        }
        int pass = insertion_sort(arr,i);
        out << i <<","<<pass<<endl;
    }
   
}
*/
//insertion sort
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cout<<"element at index"<<i<<"is:";
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
    int current =arr[i];
    int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=current;
        
    }


    

    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
  
    return 0;
    
}

