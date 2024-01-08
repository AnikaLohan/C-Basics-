
#include <iostream>
#include <math.h>
using namespace std;
class Sets{
    public:
    Sets(){}
    int set1[100]={0};
    int count=0;
    Sets(int arr[],int size){
        for(int i;i<size;i++){
            set1[i]=arr[i];
        }
        count=size;
    }
    void input();
    void display();
    void cardinality();
    bool ismember(int x);
    void powerset();
    //subset 
    //complement
    //cartesrain product
    Sets SETunion(Sets &obj);
    Sets intersection(Sets &obj);
    Sets difference(Sets &obj);
    Sets symmetricDifference(Sets &obj);

};

Sets Sets :: intersection(Sets  & obj){
    Sets result;

    for(int i=0;i<count;i++){
        if(obj.ismember(set1[i])){
            result.set1[result.count++]=set1[i];
            count++;
        }
    }
    return result;
}
Sets Sets :: difference(Sets & obj){
Sets result;
   for(int i=0;i<count;i++){
    if(!(obj.ismember(set1[i]))){
        result.set1[result.count]=set1[i];
        result.count++;
    }
   }
    
    return result;
}
Sets Sets :: symmetricDifference(Sets & obj){
    Sets result;
    
    
    return result;
}
Sets Sets:: SETunion(Sets &obj){
    
    Sets result;
    for(int i=0 ; i < count ; i++){
        result.set1[result.count] = set1[i];
        result.count++;
    }
    for(int i=0 ; i < obj.count ; i++){
        if(! ismember(obj.set1[i])){
            result.set1[result.count] = obj.set1[i];
            result.count++;
        }
    }
    return result;
}

void Sets::input(){
    int t=1;
    while(t==1){
        int x;
        cout<<"enter element at"<<count;
        cin>>x;
        set1[count++]=x;
        cout<<"do you wish to add more elements?(1/0)";
        cin>>t;
    }
}

void Sets::display(){
    for(int i=0;i<count;i++){
        cout<<set1[i]<<",";
    }
}

void Sets::cardinality(){
    cout<<"thecardinality is:"<<count<<endl;
}

bool Sets::ismember(int x){
    for(int i=0;i<count;i++){
        if(set1[i]==x){
            return true;
        }
    }

}

void Sets::powerset(){
     cout<<"P(S) = { ";
    for(int i = 0 ; i < pow(2,count) ; i++){
        if(i == 0){
            cout << char(232) << " , ";
            continue;
        }
        cout<<"{ ";
        for(int j = 0 ; j < count ; j++){
            if( i & ( 1 << j)){
                if(j == count-1){
                    cout << set1[j];
                }
                else{
                    cout << set1[j] << " , ";
                }
            }
        }
        if(i == pow(2,count)-1){
            cout << " }";
        }
        else{
            cout << " } , ";
        }
    }
    cout << " }" << endl;

    
}

int main(){
    
    Sets s1;
    s1.input();
    s1.display();
    s1.cardinality();
    cout<<s1.ismember(3)<<endl;
    cout<<" "<<endl;
    Sets s2;
    s2.input();
    s2.display();
    s2.cardinality();
    cout<<"ismeMber"<<s2.ismember(3);
    cout<<"  "<<endl;
    Sets s3=s2.SETunion(s1);
    s3.display();


}