//find the power of a number using inbuilt power function .
#include<iostream>
using namespace std;

int power(int x, int n) {

    if (n=0){
        return 1;
    }
    int smalloutput=x*power(x,n-1);
    
    return smalloutput;
}

int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}


