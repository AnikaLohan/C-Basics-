#include <bits/stdc++.h>
#include<iostream>
using namespace std;

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

