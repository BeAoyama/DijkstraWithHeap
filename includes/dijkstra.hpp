#include "dijkstra.h"

template< template <typename> class HeapType>
void Dijkstra<HeapType>::Solve(Graph const& G, long long *dis, int s) {
    // First empty the pq
    HeapType<Node> Q = new HeapType;
    Q.Clear();
    // Initialize the arrays
    for(int i = 1; i <= G.n; ++ i) {
        dis[i] = INF;
    }
    // First, the dis[s] should be 0
    dis[s] = 0;
    // And then enqueue the source s with its min-distance
    Q.Push((Node){s, 0});
    while(Q.size > 0) {
        // Take the smallest one from the pq
        Node now = Q.Pop();
        // Visit each edge starting from the current vertex
        for(Graph::Eptr i = G.G[now.x]; i; i = i->nxt) {
            // Assume this edge goes to the vertex `to'.
            int to = i->y;
            // Judge if the min-distance should be updated
            if(dis[to] > dis[now.x] + i->w) {
                // If true, update `dis' and `path'
                dis[to] = dis[now.x] + i->w;
                // Enqueue the vertex `to' with its min-distance
                Q.Push((struct Node){to, dis[to]});
            }
        }
    }
}