#include <iostream>
using namespace std;
class Recursion{
    public:
    void minElement(int arr[],int x);
    void maxElement(int arr[],int x);
    void add(int x,int y);
    void sub(int x,int y);
    void mul(int x,int y);
    void div(int x,int y);
    void sumofarray(int arr[]);

};
void Recursion::minElement(int arr[],int x){
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<"the required size is"<<size<<endl;
   for(int i=0;i<size;i++){
        min(arr[i],arr[i-2]);
   }
}



int main{

}