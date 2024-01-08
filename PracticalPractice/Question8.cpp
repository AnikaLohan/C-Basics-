//bubble sort
#include<iostream>
using namespace std;
//done
/*
int bubblesort(int arr[], int n)
{
	int pass=0;
	for (int i = 0; i < n - 1; i++){
	pass++;
	cout<<endl;
	cout<<i+1<<"pass"<<endl;
		for (int j = 0; j < n - i - 1; j++){
			pass++;
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
				pass++;
		}
	}

	for(int i=0 ; i<n ; i++) 
	cout << arr[i]<<" ";
    return pass;
}



int main()
{
    
	ofstream out("bubblesort.txt");
   
    for(int i=1 ; i<=40 ; i++){
        int arr[i];
        for(int j=0 ; j<i ; j++){
            arr[j] = i-j;
        }
        int ans = bubblesort(arr,i);
        out << i <<","<<ans<<'\n';
    }

}

*/


//n array
//n-1 iterations each iteration n-1,n-2,n-3,n-4,n-5
//ith iteration mein check karna h n-i tak
int main(){
    int n;
    cout<<"enter the size of arry";
    cin>>n;
    int arr[n];
      
    for(int i=0;i<n;i++){
        cout<<"value at index"<<i<<"is:";
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    cout<<"sorted array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    
}