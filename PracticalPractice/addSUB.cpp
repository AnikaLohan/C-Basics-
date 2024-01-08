#include <iostream>
using namespace std;
int add(int x,int y){
    if(y==0){
        return x;
    }
    if(x==0){
        return y;
    }
    return 1+add(x,y-1);
}
int sub(int x,int y){
    if(y==0){
        return x;
    }
    return  sub(x,y-1)-1;
}
int main(){
    cout<<"the sum is"<<add(5,6);
      cout<<"the sum is"<<sub(15,5);

}