#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#define firstVertex(L) L.firstVertex
#define nextVertex(P) P->nextVertex
#define idVertex(P) P->idVertex
#define firstEdge(P) P->firstEdge
#define destVertexID(P) P->destVertexID
#define weight(P) P->weight
#define nextEdge(P) P->nextEdge

#include <iostream>
using namespace std;

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex_103012300239(char newVertexID, adrVertex &v);
void createEdge_103012300239(char newDestVertexID, int newWeight, adrEdge &e);
void initGraph_103012300239(graph &G);
void addVertex_103012300239(graph &G, char newVertexID);
void addEdge_103012300239(graph &G, adrVertex v, char newDestVertexID, int newWeight);
void buildGraph_103012300239(graph &G);
void show_103012300239(graph G);

#endif // GRAPH_H_INCLUDED
