#include <iostream>
using namespace std;
class Logic{
    private:
    bool x,y;
    public:
     Logic(){
        x=-1;
        y=-1;
    }
    Logic(bool p,bool q){
        x=p;
        y=q;
    }

    void Conjunction(Logic &ob){
    bool final;
    for(int i=0;i<4;i++){
        if(ob.x==ob.y){
           final=x;
           cout<<"P="<<x<<" "<<"Q="<<y<<" "<<"P ∩ Q:"<<final<<endl;
        }
        else{
           final=0;
           cout<<"P="<<x<<" "<<"Q="<<y<<" "<<"P ∩ Q:"<<final<<endl;
        }

    }

    }
    void Disjunction(Logic &ob){
        bool final;
    for(int i=0;i<4;i++){
        if(ob.x==0 && ob.y==0){
           final=x;
           cout<<"P="<<x<<" "<<"Q="<<y<<" "<<"P U Q:"<<final<<endl;
        }
        else{
           final=1;
           cout<<"P="<<x<<" "<<"Q="<<y<<" "<<"P U Q:"<<final<<endl;
        }

    }

    }
        
    

};
int main(){
    Logic l1(1,0);
    
    Logic l2;
    l2.Conjunction(l1);
    return 0;
}