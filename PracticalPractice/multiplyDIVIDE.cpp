#include <iostream>
using namespace std;
int multiply(int x,int y){
    if(x==0||y==0){
        return 0;
    }
    return multiply(x,y-1)+x;
}

int divide(int x,int y){
    if(x==0|| y==0){
        return 0;
    }
    if(x-y==0){
        return 1;
    }
    return 1+divide(x-y,y);
}
int main(){
    cout<<"the product is:"<<multiply(4,2);
      cout<<"the division is:"<<divide(4,2);

}