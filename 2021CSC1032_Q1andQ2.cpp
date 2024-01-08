#include <iostream>
using namespace std;
class Relations{
    private:
        int relationMatrix[100][100]={{0}};
        int set[100]={0};
        int pointer=0;
    public:
        bool check(int a);
        void getRelation();
        void display();
        bool isSymmetric();
        bool isAntiSymmetric();
        bool isTransitive();
        bool isReflexive();
        void tellRelationType();
};
bool Relations::check(int a){
    for(int i=0 ; i<pointer ; i++){
        if(set[i]==a) 
        return true;
    }
    return false;
}
void Relations::getRelation(){
    int setsize;
    cout<<"enter the size of your set for relation: ";
    cin>>setsize;
    cout<<"enter your set elements: "<<endl;
    for(int i=0 ; i<setsize ; i++) cin>>set[i];
    pointer = setsize;
    int relationsize;
    cout<<"enter the number of elements: ";
    cin>>relationsize;
    for(int i=0 ; i<relationsize ; i++){
        cout<<"enter your relation : ";
        int a,b; cin>>a>>b;
        if(check(a) &&check(b)){
            relationMatrix[a][b]=1;
        }
        else{
            cout<<"Cannot create a relation "<<endl;
            i--;
        }
    }
}
void Relations::display(){
    for(int i=1 ; i<101 ; i++){
        for(int j=1 ; j<101 ; j++){
            if(relationMatrix[i][j]==1){
                cout<<"( "<<i<<" , "<<j<<" ) ";
            }
        }
    }
    cout<<endl;
}
bool Relations::isReflexive(){
    for(int i=0 ; i<pointer ; i++){
        if(relationMatrix [set[i]] [set[i]]!=1){
            return false;
        }
    }
    return true;
}
bool Relations::isSymmetric(){
    for(int i=1 ; i<100 ; i++){
        for(int j=i+1 ; j<101 ; j++){
            if((relationMatrix[i][j]==1 && relationMatrix[j][i]==0) || (relationMatrix[i][j]==0 && relationMatrix[j][i]==1)){
                return false;
            }
        }
    }
    return true;
}
bool Relations::isAntiSymmetric(){
    for(int i=1 ; i<100 ; i++){
        for(int j=i+1 ; j<101 ; j++){
           if(relationMatrix[i][j]==1 && relationMatrix[j][i]==1) return false;
        }
    }
    return true;
}
bool Relations::isTransitive(){
    for(int i=1 ; i<101 ; i++){
        for(int j=1 ; j<101 ; j++){
            if(relationMatrix[i][j]){
                for(int k=1 ; k<101 ; k++){
                    if(relationMatrix[j][k] && relationMatrix[i][k]==0){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
void Relations::tellRelationType(){
    if(isReflexive() && isSymmetric() && isTransitive()){
        cout<<"given relation is Equivalence relation:"<<endl;
    }
    else if(isReflexive() && isAntiSymmetric() && isTransitive()){
        cout<<"given relation is partial-order relation"<<endl;
    }
    else{
        cout<<"given relation is neither equivalence nor partial-order"<<endl;
    }
}