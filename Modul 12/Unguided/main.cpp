#include "graph.h"
#include <iostream>
using namespace std;

int main()
{
    Graph G;
    CreateGraph(G);

    cout << "=== Insert Node ===" << endl;
    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');

    adrNode A = FindNode(G, 'A');
    adrNode B = FindNode(G, 'B');
    adrNode C = FindNode(G, 'C');
    adrNode D = FindNode(G, 'D');
    adrNode E = FindNode(G, 'E');

    cout << "\n=== Connect Node (Undirected) ===" << endl;
    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);
    ConnectNode(C, E);

    cout << "\n=== Struktur Graph ===" << endl;
    PrintInfoGraph(G);

    cout << "\n=== DFS dari Node A ===" << endl;
    ResetVisited(G);
    PrintDFS(G, A);

    cout << "\n\n=== BFS dari Node A ===" << endl;
    ResetVisited(G);
    PrintBFS(G, A);

    cout << endl;
    return 0;
}
