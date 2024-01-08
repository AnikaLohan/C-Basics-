#include<iostream>
using namespace std;
/*
int sum(int input[], int n) {
     if(n<=0){
        return 0;
    }
    return sum(input,n-1)+ input[n-1];
    
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}



*/

int sum(int arr[],int n){
    if(n<=0){
        return 0;
    }
    return sum(arr,n-1)+ arr[n-1];
    
}

int main(){
    int n;
    cout<<"size of arr";
    cin>>n;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"the required sum is:"<<sum(input,n);
}
