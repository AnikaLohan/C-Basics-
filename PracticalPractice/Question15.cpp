#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"we assume that the value of index of an array is value of expo of x "<<endl;
    cout<<"number of terms in your equation"<<endl;
    int size;
    cin>>size;
    int *input=new int[size];
    for(int i=0;i<size;i++){
        cout<<"coefficeint of x ^"<<i<<endl;
        cin>>input[i];
    }
    int x;
    cout<<"value of x in f(x):"<<endl;
    cin>>x;
    int value=0;
    for(int i=0;i<size;i++){
        value=value+(pow(x,i)*(input[i])) ;
    }
    cout<<value;



}