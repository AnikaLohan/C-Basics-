
#include <iostream>
#include <math.h>
using namespace std;
class Sets{
    public:
    int n;
    int array[100];
    void input();  //done
    void display();     //done
    bool ismember(int x);     //done
    void cardinality();    //done  
    void powerset();      //done 
    void diff(int set2[100])
    {   
     cout<<"\n number of elements in set2:";
    int m,j;
    int flag;
    cin>>m; 
 
    for(int i=0;i<m;i++){
        cin>>set2[i];
    }

    for(int i=0;i<m;i++){
        for(j=0;j<n;j++){
            set2[i]==array[j];
            break;
        }
        if(j==n){
            cout<<set2[i]<<",";
        }
    }

    }
    void intersection(int set[100]){
    cout<<"\n number of elements in set2:";
    int m;
    int flag;
    cin>>m; 
 
    for(int i=0;i<m;i++){
        cin>>set[i];

    }
       cout<<"the intersection of set1 and set2:"<<endl;
        for(int j=0;j<m;j++){
            flag=0;
            for(int i=0;i<n;i++){
                 if(array[i]==set[j]){
                     flag =1;
                     break;
                 }
            }
            if(flag==1){
                cout<<set[j]<<" ";
            }
            
        }
    }

  
    void unionset(int set[100]){                   //done
    cout<<"\n number of elements in set2:";
    int m;
    int flag;
    cin>>m;        
    for(int i=0;i<m;i++){
        cin>>set[i];
    }
    
    cout<<"the union of set1 and set2:"<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
        for(int j=0;j<m;j++){
            flag=0;
            for(int i=0;i<n;i++){
                 if(array[i]==set[j]){
                     flag =1;
                     break;
                 }
            }
            if(flag!=1){
                cout<<set[j]<<", ";
            }
            
        }
    }
  

    
};
void Sets::input(){
    
    cout<<"number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    return ;
}
void Sets::display(){
    cout<<"{";
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
    cout<<"}";
    return ;
}
bool Sets::ismember(int x){
    cout<<"enter the number to be checked"<<endl;
    cin>>x;
     for(int i=0;i<n;i++){
        if (array[i]==x){
            cout<<"found:"<<"at position: "<<i+1<<endl;
           
        }
    }


     return 0;
}
 void Sets:: cardinality(){
     cout<<"cardinality is: "<<n<<endl;
 
 }
 
void Sets :: powerset(){
     cout<<endl<<"P(S) = { ";
    for(int i=0 ; i<pow(2,n) ; i++)
    {
        if(i==0)
        {
            cout<<" Φ"<<" , ";
            continue;
        }
        cout<<"{ ";
        for(int j=0 ; j<=n ; j++)
        {
            if( i & ( 1 << j))   //left shift operta, bitwise comp
            {
                if(j==n-1)
                {
                    cout<<array[j];
                }
                else
                {
                    cout<<array[j]<<",";
                }
            }
        }
        if(i==pow(2,n)-1)
        {
            cout<<" }";
        }
        else
        {
            cout<<" } , ";
        }
    }
    cout<<" }"<<endl;
    }


int main()
{  
    //s.input(3);
    //s.display();
    //s.ismember(4);
    //s.cardinality();
    //s.powerset();
    int set[100]={};
    //s.unionset(set);
    //s.intersection(set);
    cout<<"choose: 1.input 2.display 3.ismemeber 4.cardinality 5.powerset  6.union 7. intersection"<<endl;
    int option;
    cin>>option;
    
    


        
}