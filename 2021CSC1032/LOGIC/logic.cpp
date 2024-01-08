#include<iostream>
using namespace std;
int conjuction(int x,int y){
    if(x&&y==1)
    return 1;
    else
    return 0;
}

int disjunction(int x,int y){
    if(x||y==0)
    return 1;
    else
    return 0;
}
int exor(int x,int y){
    if((x==0&&y==0)||(x==1&&y==1)){
        return 0;
    }
    else 
    return 1;
}
int exnor(int x , int y){
    if((x==0&&y==0)||(x==1&&y==1)){
        return 1;
    }
    else 
    return 0;
}

int Nand(int x , int y){
    if(x==1&&y==1)
    return 1;
    else
    return 0;
}
int Nor(int x , int y){
    if(x==0&&y==0)
    return 1;
    else
    return 0;
}
int Neg(int x){
    if(x==1)
    return 0;
    else
    return 1;
}
int Conditional(int x,int y){
    if(x==1&&y==0)
    return 0;
    else
    return 1;
}
int BiConditional(int x,int y){
     if((x==0&&y==0)||(x==1&&y==1)){
        return 1;
    }
    else 
    return 0;
}
int main(){
    int x,y;
    cout<<"Enter value of x"<<endl;
    cin>>x;
    cout<<"Enter value of y"<<endl;
    cin>>y;
    cout<<"The conjuction of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The disjuction of x and y = "<<disjunction(x,y)<<endl;
    cout<<"The Exclusive OR of x and y = "<<exnor(x,y)<<endl;
    cout<<"The Conditional of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The Bi-Conditional of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The Exclusive NOR of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The Negation of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The Nand of x and y = "<<conjuction(x,y)<<endl;
    cout<<"The Nor of x and y = "<<conjuction(x,y)<<endl;

    


}