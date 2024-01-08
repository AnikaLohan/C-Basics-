#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int perm(int n,int r){
    if(n==0||r==0){
        return 0;
    }
    return factorial(n)/factorial(n-r);
}

int com(int n, int r){
    if(n==0||r==0){
        return 0;
    }
    return factorial(n)/(factorial(n-r)* factorial(r));
}
int main(){
    cout<<"permu"<<perm(4,2)<<endl;
    cout<<"com"<<com(4,2)<<endl;
    return 0;
}
