#include "graph.h"

void createVertex_103012300239(char newVertexID, adrVertex &v){
    v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;
}

void createEdge_103012300239(char newDestVertexID, int newWeight, adrEdge &e){
    e = new edge;
    destVertexID(e) = newDestVertexID;
    weight(e) = newWeight;
    nextEdge(e) = NULL;
}

void initGraph_103012300239(graph &G){
    firstVertex(G) = NULL;
}

void addVertex_103012300239(graph &G, char newVertexID){
    adrVertex v;
    createVertex_103012300239(newVertexID, v);

    if (firstVertex(G) == NULL){
        firstVertex(G) = v;
    } else {
        adrVertex p = firstVertex(G);
        while (nextVertex(p) != NULL){
            p = nextVertex(p);
        }
        nextVertex(p) = v;
    }
}

void addEdge_103012300239(graph &G, adrVertex v, char newDestVertexID, int newWeight){
    adrEdge e;
    adrEdge p = firstEdge(v);
    createEdge_103012300239(newDestVertexID, newWeight, e);

    if (v == NULL){
        cout << "vertex tidak ditemukan" << endl;
    } else if (firstEdge(v) == NULL){
        firstEdge(v) = e;
    } else {
        while (nextEdge(p) != NULL){
            p = nextEdge(p);
        }
        nextEdge(p) = e;
    }
}

void buildGraph_103012300239(graph &G){
    initGraph_103012300239(G);

    cout << "Masukkan ID vertex (hanya A-Z)" << endl;
    cout << "Catatan: berhenti ketika masukkan diluar A-Z" << endl;
    cout << endl;

    int i = 1;
    char input;
    while (true){
        cout << "Masukkan ID vertex ke-" << i << ": ";
        cin >> input;

        if (input < 'A' || input > 'Z'){
            break;
        }

        addVertex_103012300239(G, input);
        i++;
    }
    cout << endl;

    adrVertex v = firstVertex(G);
    while (v != NULL){
        cout << "Masukkan koneksi vertex " << idVertex(v) << " ke ID vertex (A-Z) dan Weight(int)" << endl;
        cout << "Catatan: berhenti ketika masukkan tidak ditemukan" << endl;
        cout << endl;
        int j = 1;
        char newDestVertexID;
        int newWeight;
        bool check = true;
        while (check) {
            cout << "Masukkan koneksi ke-" << j << "(IdSambungan Weight): ";
            cin >> newDestVertexID >> newWeight;

            adrVertex p = firstVertex(G);
            while (p != NULL && idVertex(p) != newDestVertexID){
                p = nextVertex(p);
            }
            if (p != NULL && idVertex(p) == newDestVertexID){
                addEdge_103012300239(G, v, newDestVertexID, newWeight);
                j++;
            } else {
                check = false;
            }
        }
        v = nextVertex(v);
        cout << endl;
    }
    cout << endl;
}

void show_103012300239(graph G){
    adrVertex v = firstVertex(G);
    adrEdge e;
    int i = 0;
    int j;

    while (v != NULL){
        i++;
        cout << "ID vertex ke-" << i << ": " << idVertex(v) << endl;
        e = firstEdge(v);
        j = 0;
        if (firstEdge(v) == NULL){
            cout << "   Koneksi vertex " << idVertex(v) << " tidak ditemukan" << endl;
        }
        while (e != NULL){
            j++;
            cout << "   Koneksi vertex " << idVertex(v) << " ke-" << j << ": " << endl;
            cout << "      ID vertex: " << destVertexID(e) << endl;
            cout << "      Weight   : " << weight(e) << endl;
            e = nextEdge(e);
        }
        v = nextVertex(v);
    }
}
