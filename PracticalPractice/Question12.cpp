#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
/*
class Stack{
    public:
        int arr[100000];
        int top =-1;
        void pop(){
            top--;
        }
        void push(int x){
            arr[++top] = x;
        }
        bool empty(){
            if(top == -1) return true;
            return false;
        }
        int tos(){
            return arr[top];
        }
};
*/


class Graph{
    public:
    int adjancencymatrix[100][100]={{0}};
    int vertices,edges;
    bool directed;
    void getgraph(string sourse);
    bool isDirected();
    bool isSimple();
    bool isComplete();
    void display();
    Graph unionGraph(Graph & g);

};

Graph Graph::unionGraph(Graph &g){
    Graph newGraph;
    if()
}
bool Graph::isComplete(){
    for(int i=1 ; i<=vertices ; i++){
        for(int j=1 ; j<=vertices , j!=i ; j++){
            if(adjancencymatrix[i][j]==0){
                return false;
            }
        }
    }
    return true;
}


bool Graph::isSimple(){
    for(int i=1 ; i<=vertices ; i++){
        for(int j=1 ; j<=vertices ;j++){
            if(adjancencymatrix[i][i]==1 || adjancencymatrix[i][j]>1){
                return false;
            }
        }
    }
    return true;
}
bool Graph::isDirected(){
    //not symmeteric matrix
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            if(adjancencymatrix[i][j] && adjancencymatrix[j][i]==0){
                return true;
            }
        }
    }
    return false;
}
void Graph::getgraph(string source){
    ifstream file;
    file.open(source);
    file>>vertices>>edges>>directed;
    for(int i=0;i<edges;i++){
        int v1,v2;
        file>>v1>>v2;
        if(directed){
            adjancencymatrix[v1][v2]++;
        }
        else{
            adjancencymatrix[v1][v2]++;
            adjancencymatrix[v2][v1]++;
        }
        
    }

}

void Graph::display(){
    for(int i=1 ; i<=vertices ; i++){
        for(int j=1 ; j<=vertices ; j++){
            cout<<setw(5)<<left;
            cout<<adjancencymatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    Graph g1;
    g1.getgraph("graph.txt");
    g1.display();
    g1.isComplete();
    g1.isDirected();
    g1.isSimple();

    return 0;
}

