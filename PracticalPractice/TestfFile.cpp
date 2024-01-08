// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
class Graphs{
    public:
    int incidenceMatrix[100][100]={{0}};
    int AdajacencyMatrix[100][100]={{0}};
    void getIncidenceMatrix();
    int vertices;
    int edges;
    void display();
    bool directed;
    void getGraph(string source);
    bool isdirected();
    bool iscomplete();
    bool isSimple();
    bool isCyclic();
    Graphs Uniongraph(Graphs &g);
    int degree();
    void inout();

    
    
};
int Graphs::degree(){
    int deg=0;
    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){
            if(incidenceMatrix[i][j]) deg++;
        }
    }
    return deg;

}
void Graphs::inout(){
    if(!directed){
        cout<<"cannot calculate in-deg and out-deg for an undirected graph"<<endl;
        return;
    }
    getIncidenceMatrix();
    for(int i=1 ; i<=vertices ; i++){
        int in=0 , out=0;
        for(int j=1 ; j<=edges ; j++){
            if(incidenceMatrix[i][j]==-1) out++;
            else if(incidenceMatrix[i][j]==1) in++;
        }
        cout<<"In-degree of vertex "<<i<<" is :"<<in<<endl;
        cout<<"Out-degree of vertex "<<i<<" is :"<<out<<endl;
    }
}


void Graphs::getIncidenceMatrix(){
    int currEdge=1;
    if(directed){
        for(int i=1;i<=vertices;i++){
            for(int j=1;j<=vertices;j++){
                 if(AdajacencyMatrix[i][j]){
                    incidenceMatrix[i][currEdge] = -1;
                    incidenceMatrix[j][currEdge] = 1;
                    currEdge++;
                }
            }
        }
    }
    else{
         for(int i=1 ; i<=vertices ; i++){
            for(int j=i ; j<=vertices ; j++){
                if(AdajacencyMatrix[i][j]){
                    AdajacencyMatrix[i][currEdge]=1;
                    AdajacencyMatrix[j][currEdge]=1;
                    currEdge++;
                }
            }
        }
    }

}
/*
bool Graphs::isCyclic(){

}
*/
Graphs Graphs::Uniongraph(Graphs &g){
    Graphs temp;
    if(vertices>g.vertices){
        temp.vertices=vertices;
    }
    else{
        temp.vertices=g.vertices;
    }
    for(int i=1;i<=temp.vertices;i++){
        for(int j=1;j<=temp.vertices;j++){
            temp.AdajacencyMatrix[i][j]=max(AdajacencyMatrix[i][j],g.AdajacencyMatrix[i][j]);
        }
    }
    return temp;
  
}


bool Graphs::iscomplete(){
    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices, j!=i ;j++){
            //all should be connnectd
            //dig ele==0
            if(AdajacencyMatrix[i][j]==0){
                return false;
            }
        }
    }
    return true;
}
bool Graphs::isSimple(){
     for(int i=0;i<=vertices;i++){
        for(int j=0;j<=vertices;j++){
            //dig elements are 0
            //elements are 0 or 1
            if(AdajacencyMatrix[i][i]==1 || AdajacencyMatrix[i][j]>1 ){
                return false;
            }
        }
    }
    return true;
}

bool Graphs::isdirected(){
    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){
            if(AdajacencyMatrix[i][j] && AdajacencyMatrix[j][i]==0){
                return true;
            }
        }
    }
    return false;
}
void Graphs::display(){
    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){
            cout<<setw(5)<<left;
            cout<<AdajacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void Graphs::getGraph(string source){
    ifstream file;
    file.open(source);
    file>>vertices>>edges>>directed;
    for(int i=0;i<edges;i++){
        int v1,v2;
        file>>v1>>v2;
        if(directed){
            AdajacencyMatrix[v1][v2]++;
        }
        else{
            AdajacencyMatrix[v1][v2]++;
            AdajacencyMatrix[v2][v1]++;
        }
    }
    
}
int main() {
    // Write C++ code 
    Graphs g;
    g.getGraph("graph.txt");
    g.display();
    cout<<"  "<<endl;
    cout<<"is directed:"<< g.isdirected()<<endl;
    cout<<"is simple:"<<g.isSimple()<<endl;
    cout<<"is complete"<<g.iscomplete()<<endl;
    g.incidenceMatrix();
    /*
    Graphs g2;
    g2.getGraph("graph2.txt");
    g2.display();
    cout<<"is directed:"<< g2.isdirected()<<endl;
    cout<<"is simple:"<<g2.isSimple()<<endl;
    cout<<"is complete"<<g2.iscomplete()<<endl;

    Graphs g3=g.Uniongraph(g2);
    g3.display();

*/

    return 0;
}