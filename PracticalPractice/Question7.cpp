
#include <iostream>
using namespace std;
//done
//binary
int helper(int arr[],int l,int r,int x)
{
    
    if (r >= l) {
        int mid = (l+r)/2;
 
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return helper(arr, l, mid - 1, x);
 
        return helper(arr, mid + 1, r, x);
    }

    return -1;
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
     int k=helper(input,0,size-1,element);
    return k;
}



int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}


