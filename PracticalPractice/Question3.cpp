#include <iostream>
using namespace std;
class Relation{
  
   public:
   int relation[100][100]={{0}};
   int set[100]={0};
   int count;
   void get();
   bool isPresent(int x);
   void display();
   bool isReflexive();
   bool isSymmetric();
   bool isAntiSymmetric();
   bool isTransitive();
   void tellRelationType();

};
void Relation::tellRelationType(){
    
}
bool Relation::isTransitive(){
    for(int i=1 ; i<101 ; i++){
        for(int j=1 ; j<101 ; j++){
            if(relation[i][j]){
                for(int k=0;k<101;k++){
                    if(relation[j][k] && relation[k][i] ==0){
                        return false;

                    }
                }
            }            
        }
    }
    return true;
}


bool Relation::isAntiSymmetric(){
    for(int i=1 ; i<100 ; i++){
        for(int j=i+1 ; j<101 ; j++){
           if(relation[i][j]==1 && relation[j][i]==1) return false;
        }
    }
    return true;
}
bool Relation::isSymmetric(){
    for(int i=0;i<101;i++){
        for(int j=0;i<101;j++){
             if(relation[i][j]==0 && relation[j][i]==1 || relation[i][j]==1 && relation[j][i]==0 ){
            return false;

            }
        return true;
       
        }
    }
}
bool Relation::isReflexive(){
    for(int i=0;i<count;i++){
        if(relation[set[i]][set[i]]!=1){
            return false;
        }
        return true;
    }

}

void Relation::display(){
    cout<<"display is working"<<endl;
    
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(relation[i][j]==1){
                 cout<<"["<<i<<","<<j<<"]";
            }
           
        }
        
    }
}
bool Relation::isPresent(int x){
    for(int i=0;i<count;i++){
        if(set[i]==x){
            return true;
        }
    }
}
void Relation::get(){
    int setsize;
    cout<<"enter the size of your set";
    cin>>setsize;
    cout<<"please enter your set elements separated by a space: "<<endl;
    for(int i=0 ; i<setsize ; i++) cin>>set[i];
    count=setsize;
    int real;
    cout<<"enter the number of relations you would like to enter";
    cin>>real;
    for(int i=0;i<real;i++){
        cout<<"enter the relation separated by spaces";
        int a,b; cin>>a>>b;
        if(isPresent(a) && isPresent(b)){
             relation[a][b]=1;
             cout<<"relation entered successfully"<<endl;
        } 
        else{
            cout<<"wrong input give relations which are avaibale in the set"<<endl;
            i--;
        }

       
    }

}


int main(){
    Relation r;
    r.get();
    //r.isPresent(1);
    r.display();
    if(r.isReflexive()){
        cout<<"is reflex"<<endl;
    }
    else{
        cout<<"not reflex"<<endl;
    }
//----------------------------------
    if(r.isTransitive()){
        cout<<"is trans"<<endl;
    }

    else{
        cout<<"istransitive"<endl;
    }

//----------------------------------
    if(r.isSymmetric()){
        cout<<"is symm"<<endl;
    }
    else{
        cout<<"not sym"<<endl;
    }

//----------------------------
    if (r.isAntiSymmetric()){
        cout<<"is antisymm"<<endl;
    }
    else{
        cout<<"not anti symm"<<endl;
    }
  
}