#include <iostream>
#include <math.h>
using namespace std;
class RELATION{
    public:
    int i,j,m,n,x;
    int A[10][10];

    void is_trans(){

        
        return ;
    }
    void is_antisym(){

    for (i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            if (A[i][j] == - A[j][i])
                x = 1;
        }
    }
    if (x == 1)
        cout << "The matrix is antisymmetric.\n ";
    
    else
        cout << "It is not antisymmetric. \n ";
 
    return;

 }
    

    void is_ref(){
        int check=0;
         for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                  if(i==j){
                      if(A[i][j]==0){
                          check=1;
                        }
                    }
                   else{ 
                       if(A[i][j]!=0){
                          check=1;
                        }
                    } 
                }   
        }  
        if(check==1){
            cout<<"it is not a diagonal matrix"<<endl;
        }
        else{
            cout<<"it is a diagonal matrix"<<endl;
        }

    }


    void input_matrix(){
        cout<<"Enter the number of rows and columns:";
        cin>>m>>n;
        cout<<"enter the elements of the matrix:";
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                cin >> A[i][j];
    }


    void is_sym(){
        int i,j,x=0;
    for (i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
                x = 1;
        }
    }
    if (x == 0)
        cout << "The matrix is symmetric.\n ";
    
    else
        cout << "It is not symmetric. \n ";
 
    return;

 }
    


};

