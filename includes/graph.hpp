#include "graph.h"
#include <iostream>
#include <cstdio>

void Graph::Clear() {
    for(int i = 1; i <= n; ++ i) {
        for(Eptr e = G[i], nxt = NULL; e; e = nxt) {
            nxt = e->nxt;
            delete e;
        }
    }
    delete [] G;
    G = NULL;
}

void Graph::AddEdge(int x, int y, int w) {
    Eptr ne = new Edge;
    ne->x = x;
    ne->y = y;
    ne->w = w;
    ne->nxt = G[x];
    G[x] = ne;
}

void Graph::InputFromKeyboard() {
    scanf("%d%d", &n, &m);
    G = new Eptr[n + 1];
    for(int i = 0, x, y, w; i < m; ++ i) {
        scanf("%d%d%d", &x, &y, &w);
        AddEdge(x, y, w);
    }
}

void Graph::InputFromFile() {
    scanf("%d%d", &n, &m);
    G = new Eptr[n + 1];
    for(int i = 0, x, y, w; i < m; ++ i) {
        scanf("%d%d%d", &x, &y, &w);
        AddEdge(x, y, w);
    }
}