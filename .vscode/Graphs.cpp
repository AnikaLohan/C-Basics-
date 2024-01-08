/*
 Determine if graph is undirected or directed
- Determine if graph is simple or not
- Use incidence matrix to find degrees of all vertices in an undirected graph
- Use incidence matrix to find in-degrees and out-degrees of all vertices in a directed graph
- Determine if a graph is complete
- Determine if the graph contains a simple circuit /cycle
- Find union of two graphs
Determine if a graph has euler path/euler circuit
- Determine if graph has hamiltonian path/hamiltonian circuit

*/


#include <iostream>
using namespace std;
class Graph{
private:
    int n;
	int m;
    int count=0;
    int counter=0;
	int counter1=0;
	int counter2=0;
    int graph[100][100];
	int graph1[100][100];
	int arr[100];

public:
	void vertices()
	{
		cin>>n;
	}

	void get_graph()
	{
		for(int i=0;i<n;i++)
		{
	    	for(int j=0;j<n;j++)
	    	{
	        	cin>>graph[i][j];
			}
		}
	}

	void directed()
	{
		cout<<"Your entered graph is: "<<endl;
		for(int i=0;i<n;i++)
		{
	    	for(int j=0;j<n;j++)
	    	{
	    		cout<<graph[i][j]<<" ";
	        	if(i==j && graph[i][j] || graph[i][j]!=graph[j][i])     //symm matrix: undirected
 	        	{
 	            	count++;
 	        	}
			}
			cout<<endl;
		}
		cout<<endl;
		if(count>0)
		{
	    	cout<<"directed"<<endl;
		}
		else
		{
			cout<<"undirected"<<endl;
		}
	}

	void simple()
	{
		bool temp=false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(graph[i][j]>1 || graph[i][i]!=0)
				{
					temp=false; 
				}
				else
				{
					temp=true;
				}
			}
		}
		if(temp==true)
		{
			cout<<"It is Simple"<<endl;
		}
		else
		{
			cout<<"It is Not Simple"<<endl;
		}
	}

	void degree()
	{
		for(int i=0;i<n;i++)
		{
            for(int j=0;j<n;j++)
			{
                if(graph[i][j]==1)
				{
                    counter++;
				}
            }
            cout<<counter<<endl;
            counter=0;
		}
	}

	void complete()
	{
		bool temp=false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(graph[i][i]==0 && graph[i][j]==1)    //diagn=0,rest =1
				{
					temp=true;
				}
				else
				{
					temp=false;
				}
			}
		}
		if(temp==true)
		{
			cout<<"It is Complete"<<endl;
		}
		else
		{
			cout<<"It is Incomplete"<<endl;
		}
	}

	void in_out()
	{   //left
        //directed matrix edges
		if(count>0)
		{
			cout<<"Create a Incidence Matrix for this:"<<endl;
			cout<<"Enter the no. of edges in the graph: ";
			cin>>m;
			for(int i=0;i<n;i++)
			{
	    		for(int j=0;j<m;j++)
	    		{
	        		cin>>graph1[i][j];
				}
			}
			cout<<"Your entered graph is: "<<endl;
			for(int i=0;i<n;i++)
			{
	    		for(int j=0;j<m;j++)
	    		{
	    			cout<<graph1[i][j]<<" ";
				}
				cout<<endl;
			}
			for(int i=0;i<n;i++)
			{
            	for(int j=0;j<m;j++)
				{
                	if(graph1[i][j]==1)
					{
                    	counter1++;
					}
					else if(graph1[i][j]==-1)
					{
						counter2++;
					}
					else
					{
						continue;
					}
            	}
            	cout<<"Out degree for"<<i<<"is: "<<counter1<<endl;
				cout<<"In degree for"<<i<<"is: "<<counter2<<endl<<endl;
            	counter1=0;
				counter2=0;
			}
		}
	}

	void euler()
	{
        //odd number of degrees 0 or 2
		int c2=0;     //number of odd degrees stored here    
		for(int i=0;i<n;i++)
		{			
			int count=0;
			for(int j=0;j<n;j++)
			{	
				count+=graph[i][j];   //extracting degrees 
			}
				arr[i]=count;
		}
		for(int i=0;i<n;i++)     //finding odd degrees in array 
		{
			if(arr[i]%2!=0)
			{
				c2++;
			}
			if(i==(n-1))
			{
				if(c2==0)
				{
					cout<<"Euler circuit exists"<<endl;      
				}
				else if(c2==2)
				{
					cout<<"Euler path exists"<<endl;
				}	
				else
				{
					cout<<"Both euler circuit and path do not exist"<<endl;
				}
			}	 
		}
	}

	void hamiltonian()
	{
		
	}
};

int main()
{	
Graph g1;
g1.vertices();
g1.get_graph();
g1.directed();
g1.simple();
g1.degree();
g1.complete();
g1.in_out();
g1.euler();
return 0;
}