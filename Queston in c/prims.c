#include<stdio.h>

// Function to find the vertex with minimum key value 
int min_Key(int key[], int visited[], int v)  
{ 
    int min = 999, min_index,i;  // 999 represents an Infinite value

    for (i = 0; i < v; i++) { 
        if (visited[i] == 0 && key[i] < min) { 
        	// vertex should not be visited
            min = key[i];
			min_index = i;  
        }
    }    
    return min_index;  
}  

// Function to print the final MST stored in parent[]  
int print_MST(int parent[], int cost[10][10], int v)  
{  
    int minCost=0,i;
	printf("Edge \tWeight\n");  
    for (i = 1; i< v; i++) {
    	printf("\n%d %d:%d",parent[i],i,cost[i][parent[i]]);
		minCost+=cost[i][parent[i]];
    }
	printf("\nTotal cost is:%d",minCost);
}  

// Function to find the MST using adjacency cost matrix representation  
void find_MST(int cost[10][10], int v)  
{  
    int parent[10], key[10];
    int visited[10],i,u,x;

    // Initialize all the arrays 
    for (i = 0; i< v; i++) { 
        key[i] = 999;    // 99 represents an Infinite value
        visited[i] = 0;
        parent[i]=-1;
    }    

    key[0] = 0;  // Include first vertex in MST by setting its key vaue to 0.  
    parent[0] = -1; // First node is always root of MST  

    // The MST will have maximum V-1 vertices  
    for (x = 0; x < v - 1; x++) 
    {  
        // Finding the minimum key vertex from the 
        //set of vertices not yet included in MST  
        int u = min_Key(key, visited,v);  

        visited[u] = 1;  // Add the minimum key vertex to the MST  

        // Update key and parent arrays
        for (i = 0; i < v; i++)  
        {
            // cost[u][v] is non zero only for adjacent vertices of u  
            // visited[v] is false for vertices not yet included in MST  
            // key[] gets updated only if cost[u][v] is smaller than key[v]  
            if (cost[u][i]!=0 && visited[i] == 0 && cost[u][i] < key[i])
            {  
                parent[i] = u;
                key[i] = cost[u][i];  
            }        
        }
    }

    // print the final MST  
	print_MST(parent, cost,v);  
}  

// main function
int main()  
{  
    int cost[10][10],i,j,v;
    printf("\nenter no. of vertices:");
    scanf("%d",&v);
    printf("\n enter the cost matrix:");
	for (i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
			scanf("%d",&cost[i][j]);
        }
    }
	find_MST(cost,v);  

    return 0;  
}  
