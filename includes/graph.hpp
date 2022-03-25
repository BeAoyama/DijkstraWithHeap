#include "graph.h"
#include <iostream>
#include <cstdio>

template <typename Length>
void Graph<Length>::Clear() {
    for(int i = 1; i <= n; ++ i) {
        for(Eptr e = G[i], nxt = NULL; e; e = nxt) {
            nxt = e->nxt;
            delete e;
        }
    }
    delete [] G;
    G = NULL;
}

template <typename Length>
void Graph<Length>::AddEdge(int x, int y, Length w) {
    Eptr ne = new Edge;
    ne->x = x;
    ne->y = y;
    ne->w = w;
    ne->nxt = G[x];
    G[x] = ne;
}

template <typename Length>
void Graph<Length>::InputFromKeyboard() {
    scanf("%d%d", &n, &m);
    G = new Eptr[n + 1];
    for(int i = 0, x, y, w; i < m; ++ i) {
        scanf("%d%d%d", &x, &y, &w);
        AddEdge(x, y, w);
    }
}

template <typename Length>
void Graph<Length>::InputFromFile() {
    scanf("%d%d", &n, &m);
    G = new Eptr[n + 1];
    for(int i = 0, x, y, w; i < m; ++ i) {
        scanf("%d%d%d", &x, &y, &w);
        AddEdge(x, y, w);
    }
}