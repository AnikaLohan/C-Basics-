#include <iostream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;


class Registration{
    protected:
        string reg[100][100];
        int events[100][100];
        int size_reg;
        int flag_size;
        int flag_display;
    
    public:

        Registration(){
            size_reg=0;
            flag_size=0;
            flag_display=0;
        }
        void copy(Registration r){
            flag_size=r.flag_size;
            for(int i=0; i<flag_size; i++){
                for(int j=0; j<4; j++){
                    reg[i][j]=r.reg[i][j];
                }
            }
            for(int k=0; k<flag_size; k++){
                for(int l=0; l<7; l++){
                    events[k][l]==r.events[k][l];
                }
            }
        }
        void get(){
            reg;
            events;
        }
        
        void input_details(){
            cout<<"How many participants do you want to enter: "<<endl;
            cin>>size_reg;
            flag_size+=size_reg;
            for(int i=(flag_size-size_reg); i<flag_size; i++){
                cout<<"Enter details of participant "<<i+1<<":"<<endl;
                for(int j=0; j<5; j++){
                    switch(j){
                        case 0:
                            cout<<"Enter Name: ";
                            cin>>reg[i][j];
                            break;
                        case 1:
                            cout<<"Enter Age: ";
                            cin>>reg[i][j];
                            break;
                        case 2:
                            cout<<"Enter Gender: Type M for male, Type F for Female: ";
                            cin>>reg[i][j];
                            break;
                        case 3:
                            cout<<"Enter College Name: ";
                            cin>>reg[i][j];
                            break;
                        case 4:
                            cout<<"Enter Event choice: "<<endl;
                            cout<<"Type 1 in fron of events participant is participating in and 0 in front of other events: "<<endl;
                            cout<<"100M: ";     
                            cin>>events[i][0];
                            cout<<"200M: ";
                            cin>>events[i][1];
                            cout<<"400M: ";
                            cin>>events[i][2];
                            cout<<"HURDLES: ";
                            cin>>events[i][3];
                            cout<<"OBSTACLES: ";
                            cin>>events[i][4];
                            cout<<"4*100M RELAY: ";
                            cin>>events[i][5];
                            cout<<"4*200M RELAY: ";
                            cin>>events[i][6];
                            
                            
                            
                            break;
                    }
                }
            cout<<"Records entered successfully"<<endl;
            }
        }

        void display_details(){
            string name;
            cout<<"Do you want to display details of : 1. Single Participant 2. All Participants"<<endl;
            cin>>flag_display;
            if(flag_display==1){
                cout<<"Enter name in all caps for the participant's details: "<<endl;
                cin>>name;
                for(int i=0; i<flag_size; i++){
                    if(name==reg[i][0]){
                        cout<<"The details are: "<<endl;
                        for(int j=0; j<5; j++){
                            if(j==4){
                                for(int k=0; k<7; k++){
                                    if(events[i][k]==1){
                                        switch(k){
                                            case 0:
                                                cout<<"100M, ";
                                                break;
                                            case 1:
                                                cout<<"200M, ";
                                                break;
                                            case 2:
                                                cout<<"400M, ";
                                                break;
                                            case 3:
                                                cout<<"HURDLES, ";
                                                break;
                                            case 4:
                                                cout<<"OBSTACLES, ";
                                                break;
                                            case 5:
                                                cout<<"4*100M RELAY, ";
                                                break;
                                            case 6:
                                                cout<<"4*200M, ";
                                                break;
                                        }
                                    }
                                }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                            
                        }
                        cout<<endl;
                    }
                }
            }
            else if(flag_display==2){
                cout<<"The details are: "<<endl;
                for(int i=0; i<flag_size; i++){
                    for(int j=0; j<5; j++){
                        if(j==4){
                                for(int k=0; k<7; k++){
                                    if(events[i][k]==1){
                                        switch(k){
                                            case 0:
                                                cout<<"100M, ";
                                                break;
                                            case 1:
                                                cout<<"200M, ";
                                                break;
                                            case 2:
                                                cout<<"400M, ";
                                                break;
                                            case 3:
                                                cout<<"HURDLES, ";
                                                break;
                                            case 4:
                                                cout<<"OBSTACLES, ";
                                                break;
                                            case 5:
                                                cout<<"4*100M RELAY, ";
                                                break;
                                            case 6:
                                                cout<<"4*200M, ";
                                                break;
                                        }
                                    }
                                }
                        }
                        else{
                            cout<<reg[i][j]<<"\t";
                        }
                        
                    }
                    cout<<endl;
                }

            }
            else{
                cout<<"Wrong choice enterd"<<endl;
            }
            for(int x=0; x<flag_size; x++){
                for(int y=0; y<7; y++){
                    cout<<events[x][y]<<"\t";
                }
                cout<<endl;
            }
        }
        
        

        void group_by_event(){
            int choice;
            int op;
            string flag_event;
            cout<<"Do you want to see the details of participants of grouped by: 1. A specific event 2. All events "<<endl;
            cin>>choice;
            cout<<"Groups on the basis of events: "<<endl<<endl;
            if(choice==1){
                cout<<"Choose event: 0. 100M,  1. 200M, 2. 400M, 3. HURDLES, 4. OBSTACLES, 5. 4*100M REALY, 6. 4*200M RELAY"<<endl;
                cin>>op;
                for(int i=0; i<flag_size; i++){
                    if(events[i][op]==1){
                        for(int j=0; j<5; j++){
                            if(j==4){
                                for(int k=0; k<7; k++){
                                    if(events[i][k]==1){
                                        switch(k){
                                            case 0:
                                                cout<<"100M, ";
                                                break;
                                            case 1:
                                                cout<<"200M, ";
                                                break;
                                            case 2:
                                                cout<<"400M, ";
                                                break;
                                            case 3:
                                                cout<<"HURDLES, ";
                                                break;
                                            case 4:
                                                cout<<"OBSTACLES, ";
                                                break;
                                            case 5:
                                                cout<<"4*100M RELAY, ";
                                                break;
                                            case 6:
                                                cout<<"4*200M, ";
                                                break;
                                        }
                                    }
                                }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
            }
            else if(choice==2){
                cout<<"100M: "<<endl;
               for(int i=0;i<flag_size;i++){
                            if(events[i][0]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
                
                cout<<"200M"<<endl;
                for(int i=0;i<flag_size;i++){
                            if(events[i][1]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
                cout<<"400M"<<endl;

                for(int i=0;i<flag_size;i++){
                            if(events[i][2]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }


                cout<<"HURDLES"<<endl;

                for(int i=0;i<flag_size;i++){
                            if(events[i][3]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }


                cout<<"OBSTACLES"<<endl;

                for(int i=0;i<flag_size;i++){
                            if(events[i][4]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
                cout<<"4*100M RELAY"<<endl;

                for(int i=0;i<flag_size;i++){
                            if(events[i][5]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
                cout<<"4*200M,"<<endl;

                for(int i=0;i<flag_size;i++){
                            if(events[i][6]==1){
                                for(int j=0; j<5; j++){
                                if(j==4){
                                    for(int k=0; k<7; k++){
                                        if(events[i][k]==1){
                                            switch(k){
                                                case 0:
                                                    cout<<"100M, ";
                                                    break;
                                                case 1:
                                                    cout<<"200M, ";
                                                    break;
                                                case 2:
                                                    cout<<"400M, ";
                                                    break;
                                                case 3:
                                                    cout<<"HURDLES, ";
                                                    break;
                                                case 4:
                                                    cout<<"OBSTACLES, ";
                                                    break;
                                                case 5:
                                                    cout<<"4*100M RELAY, ";
                                                    break;
                                                case 6:
                                                    cout<<"4*200M, ";
                                                    break;
                                            }
                                        }
                                    }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }

                  
            }
     
 
        }
        
        void group_by_gender(){
                string flag_gender;
                cout<<"Groups on the basis of Gender: "<<endl;
                cout<<"choose gender: M OR F"<<endl;
                cin>>flag_gender;
                for(int i=0; i<flag_size; i++){
                    if(reg[i][2]==flag_gender){
                        for(int j=0; j<5; j++){
                            if(j==4){
                                for(int k=0; k<7; k++){
                                    if(events[i][k]==1){
                                        switch(k){
                                            case 0:
                                                cout<<"100M, ";
                                                break;
                                            case 1:
                                                cout<<"200M, ";
                                                break;
                                            case 2:
                                                cout<<"400M, ";
                                                break;
                                            case 3:
                                                cout<<"HURDLES, ";
                                                break;
                                            case 4:
                                                cout<<"OBSTACLES, ";
                                                break;
                                            case 5:
                                                cout<<"4*100M RELAY, ";
                                                break;
                                            case 6:
                                                cout<<"4*200M, ";
                                                break;
                                        }
                                    }
                                }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
        }   

 void group_by_college(){
                 string flag_college;
                cout<<"Groups on the basis of college: "<<endl;
                cout<<"choose college (in caps):"<<endl;
                cin>>flag_college;
                for(int i=0; i<flag_size; i++){
                    if(reg[i][3]==flag_college){
                        for(int j=0; j<5; j++){
                            if(j==4){
                                for(int k=0; k<7; k++){
                                    if(events[i][k]==1){
                                        switch(k){
                                            case 0:
                                                cout<<"100M, ";
                                                break;
                                            case 1:
                                                cout<<"200M, ";
                                                break;
                                            case 2:
                                                cout<<"400M, ";
                                                break;
                                            case 3:
                                                cout<<"HURDLES, ";
                                                break;
                                            case 4:
                                                cout<<"OBSTACLES, ";
                                                break;
                                            case 5:
                                                cout<<"4*100M RELAY, ";
                                                break;
                                            case 6:
                                                cout<<"4*200M, ";
                                                break;
                                        }
                                    }
                                }
                            }
                            else{
                                cout<<reg[i][j]<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
        }   


};


class Event: public Registration{
    
    int graph[100][8];
    int element;
    //here we took 8 because we have 8 points to cover in the ground.
    string circle[8]={"A","B","C","D","E","F","G","H"};
    string Group_events[2]={"4*100M" , "4*200M"};
    string Solo_events [5]={"100M","200M","400M","HURDLES","OBSTACLES"};
    public:
    
    int Euler_path(){
    int vertices{0};
    string array[100]; //temp array for storing 
    int count;
   
     cout<<"Choose event: 0. 100M,  1. 200M, 2. 400M, 3. HURDLES, 4. OBSTACLES, 5. 4*100M REALY, 6. 4*200M RELAY"<<endl;
                cin>>element; 
                for(int i=0; i<flag_size; i++){
                    if(events[i][element]==1){
                        count++;
                        array[i]=reg[0][i];
                    }
    if (element==0){
        vertices=2;
    }
    if(element==1){
        vertices=4;
    }
    if(element==2){
        vertices=8;
    }
    string name;
    cout<<"enter the name of the player:";
    cin>>name;
    cout<<"WRITE 1 IN FRONT OF THE VERTICES THE PLAYER CROSSED AND 0 IN ANY OTHER CASE."<<endl;

	
	for(int i=0;i<count;i++){
            cout<<"Enter for "<<array[i]<<endl;
	    for(int a=0;a<vertices;a++){
	    cout<<"POINT : "<<circle[a]<<endl;
	    cin>>graph[i][a];
        for(int b=vertices; b<8; b++){
            graph[i][b]=0;
         }
	   } 
	}
    cout<<"the graph matrix is: "<<endl;
    for(int i=0; i<flag_size; i++){
        for(int j=0; j<8; j++){
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
     }
	   }
       return 0;
    } 
    
    void identify(){
   
        for(int i=0;i<2;i++){
             if(element==6||element==5){
            
              
              cout << "Group events are calculated through Hamiltonian"<<endl;
              //Euler_path(s);
              break;
             }
       }    
        for(int j=0;j<5;j++){
           if(element==0||element==1||element==2||element==3||element==4){
       
           cout << "Solo events are calculated through Euler path: :"<<endl;
           
               break;
        }
    }
    
 
    }
  
};



int main(){
  


    Registration r;
    r.input_details();
    r.display_details();
    r.group_by_event();
    r.group_by_gender();
    r.group_by_college();
    Event ob1();
    //obj1.Euler_path();
    // ob2.identify();
    //Event ob3("4*100M");
    //ob2.Euler_path();
   // ob3.Euler_path();
    // ob3.identify();
    //ob3.Euler_path;
    

   
    
    
    return 0;
}


