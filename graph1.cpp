//take user input for number of vertices and edges between
// vertices. represent the graph as adjancency matrix
#include<iostream>
using namespace std;
int main(){
    int vertices,edges;
    int u,v;
    int* arr = new int[vertices * vertices];
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>u;
            cin>>v;
            while(u>0 && v>0){
            arr[i][j]=1;
            arr[j][i]=1;
            }
         

        }
    }
   


    return 0;
}
