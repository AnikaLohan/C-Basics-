#include <iostream>
using namespace std;
class logic{
   bool conj(bool x,bool y);
   bool disj(bool x,bool y);
   bool neg(bool x);
   bool cond(bool x,bool y);
   bool bicond(bool x,bool y);
   bool NOR(bool x,bool y);
   bool NAND(bool x, bool y);
   bool ExNOR(bool x,bool y);
   bool ExOR(bool x,bool y);
   
   
};
bool logic::NOR(bool x,bool y){
    
}
bool logic::neg(bool x){
    if(x==0){
        return 1;
    }
    return 0;
}
bool logic::bicond(bool x,bool y){
    //same wale are true diff wale are false
    if(x==y ){
        return 1;
    }
    return 0;
}
bool logic::cond(bool x,bool y){
    //only one condition where it is not true
    if(x==1 && y==0){
        return 0;
    }
    return 1;
}
bool logic::disj(bool x,bool y){
    if(x==0 && y==0){
        return 0;
    }
    return 1;
}
bool logic::conj(bool x,bool y){
    if(x==0 || y==0){
        return 0;
    }
    return 1;
}
int main(){
    
    return 0;
}