#include <iostream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;


class Registration{
        
    public:
        string reg[100][100];
        int events[100][100];
        int size_reg;
        int flag_size;
        int flag_display;
        int e0;
        int e1;
        int e2;
        int e3;
        int e4;
        int e5;
        int e6;

        Registration(){
            size_reg=0;
            flag_size=0;
            flag_display=0;
            e0=0;
            e1=0;
            e2=0;
            e3=0;
            e4=0;
            e5=0;
            e6=0;
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
                for(int j=0; j<4; j++){
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
                    }
                }
            cout<<"Records entered successfully"<<endl;
            }
        }

        void input_events(){
            string name;
            cout<<"Enter name of participant you want to enter events for: "<<endl;
            cin>>name;
            for(int i=0; i<flag_size; i++){
                if(reg[i][0]==name){
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
                }
            }
            cout<<"Records entered successfully."<<endl;
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
                        e0++;
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
                        e1++;
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
                        e2++;
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
                        e3++;
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
                        e4++;
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
                        e5++;
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
                        e6++;
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
    string circle[8]={"A","B","C","D","E","F","G","H"};
    string Group_events[2]={"4*100M" , "4*200M"};
    string Solo_events [5]={"100M","200M","400M","HURDLES","OBSTACLES"};
    public:

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
        e0=r.e0;
        e1=r.e1;
        e2=r.e2;
        e3=r.e3;
        e4=r.e4;
        e5=r.e5;
        e6=r.e6;
    }

    void Euler_path(){
        int vertices{0};
        string array[100]; //temp array for storing 
        int count;
        count=0;
    
        cout<<"Choose event: 0. 100M,  1. 200M, 2. 400M, 3. HURDLES, 4. OBSTACLES, 5. 4*100M REALY, 6. 4*200M RELAY"<<endl;
        cin>>element; 
        for(int i=0; i<flag_size; i++){
            if(events[i][element]==1){
                array[count]=reg[i][0];
                count++;
                cout<<"count is: "<<count<<endl;

            }
            
        }
        for(int i=0;i<count;i++){
           array[count]=reg[i][0];
        }1
     
        if (element==0){
            vertices=2;
        }
        if(element==1){
            vertices=4;
        }
        if(element==2){
            vertices=8;
        }
        if(element==3){
            vertices=8;
        }
        if(element==4){
            vertices=8;
        }
        if(element==5){
            vertices=2;
        }
        if(element==6){
            vertices=4;
        }
        cout<<"WRITE 1 IN FRONT OF THE VERTICES THE PLAYER CROSSED AND 0 IN ANY OTHER CASE."<<endl;
	    if(count!=0){
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
        }
    
        cout<<"the graph matrix is: "<<endl;
        for(int i=0; i<flag_size; i++){
            for(int j=0; j<8; j++){
                cout<<graph[i][j]<<"\t";
            }
            cout<<endl;
        }
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

    int numberOfMatches() {
        int n;
        int op;
        cout<<"Which event do you want to check the rounds for: 0.100M 1.200M 2.400M 3.HURDLES 4.OBSTACLES 5.4*100M 6.4*200M"<<endl;
        cin>>op;
        int ct=0;
        int round =0;
        if(op==0){
            n=e0;
            cout<<"Number of participants are: "<<e0<<endl;
        }
        else if(op==1){
            n=e1;
            cout<<"Number of participants are: "<<e1<<endl;
        }
        else if(op==2){
            n=e2;
            cout<<"Number of participants are: "<<e2<<endl;
        }
        else if(op==3){
            n=e3;
            cout<<"Number of participants are: "<<e3<<endl;
        }
        else if(op==4){
            n=e4;
            cout<<"Number of participants are: "<<e4<<endl;
        }
        else if(op==5){
            n=e5;
            cout<<"Number of participants are: "<<e5<<endl;
        }
        else if(op==6){
            n=e6;
            cout<<"Number of participants are: "<<e6<<endl;
        }
        else{
         cout<<"Incorrect entry"<<endl;
        }
        cout<<"Number of participants in one heat: 2"<<endl;
        while(n>=1)
        {
            if(n%2==0)
            { 
                ct+=n/2; n=n/2;            // ct is for total number of matches being displayed in the end
                cout<<"Round "<<++round<<" ,matches "<<n<<endl;
            }
            else
                {ct+=n/2 + 1; n=(n/2+1);
                    cout<<"Round "<<++round<<" : Matches "<<n<<endl;
                }
            if(n==1) break; 
        }
        cout<<"Total number of matches are: "<<ct<<endl;
        return ct;
    }   
  
};



int main(){
  
    Registration r;
    Event e;
    int y=1;
    int op;
    while(y==1){
        cout<<"Please choose from the following menu: "<<endl;
        cout<<"1. Add a participant"<<endl;
        cout<<"2. Add events for a participant"<<endl;
        cout<<"3. Display Participants"<<endl;
        cout<<"4. Display Groups"<<endl;
        cout<<"5. Check fixture rounds for events"<<endl;
        cout<<"6. Enter event track for participants"<<endl;
        cout<<"7. Display result of participant"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>op;
        switch(op){
            case 1:
                r.input_details();
                break;
            case 2:
                r.input_events();
                break;
            case 3:
                r.display_details();
                break;
            case 4:
                int flag1;
                cout<<"How do you want to view the groups: 1. Gender 2. Events 3. College"<<endl;
                cin>>flag1;
                switch(flag1){
                    case 1:
                        r.group_by_gender();
                        break;
                    case 2:
                        r.group_by_event();
                        break;
                    case 3:
                        r.group_by_college();
                        break;
                    default:
                        cout<<"Wrong choice entered"<<endl;
                }
                break;
            case 5:
                e.copy(r);
                e.numberOfMatches();
                break;
            case 6:
                e.copy(r);
                e.Euler_path();
                break;
            case 7:
                e.copy(r);
                break;
            case 8:
                y=0;
                break;
            default:
                cout<<"Wrong choice entered"<<endl;
                break;
        }
        
        if(op!=8){
            cout<<"Do you want to continue?: 1. Yes  0. No"<<endl;
            cin>>y;
            while(y!=1 && y!=0){
                cout<<"Wrong choice entered. Enter choice again";
                cout<<"Do you want to continue?: 1. Yes  0. No"<<endl;
                cin>>y;
            }
        }
    }
    return 0; 
}

    
