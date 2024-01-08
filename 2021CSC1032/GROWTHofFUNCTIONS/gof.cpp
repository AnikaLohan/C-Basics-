#include <iostream>
#include <fstream>
using namespace std;
int count(int n){
    if(n == 0){
        return 0;
    }
    else{
        return 2*n + count(n-1);
    }
}
int main(){
    ofstream out;
    out.open("gof.txt");
    int n; 
    cout << "enter the value of n: "; 
    cin>>n;
    for(int i=0 ; i <= n ; i++){
        out << i <<"," << count(i) <<'\n';
    }
    return 0;
}