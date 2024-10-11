#include<bits/stdc++.h>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjMatrix;

public:
    Graph(int numVertices) : numVertices(numVertices) {
        adjMatrix.resize(numVertices, vector<int>(numVertices, 0));
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1; 
    }

    void printAdjacencyMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

void solve()
{    
      int n;
      cin>>n;
      Graph*g= new Graph(n);
      for(int i=0;i<n;i++)
      {
            int u,v;
            cin>>u>>v;
            g.addEdge(u,v);
      }
      g.printAdjacencyMatrix();
}
int main()
{
      int t;
      cin >> t;
      while(t--)
      {
            solve();
      }
      return 0;
}