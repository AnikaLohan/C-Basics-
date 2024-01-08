#include <iostream>
using namespace std;
int findmin(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return min(arr[n-1],findmin(arr,n-1));
}
int findmax(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],findmax(arr,n-1));
}
int main(){
    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  findmin(A, n);
     cout <<  findmax(A, n);
    return 0;
}
