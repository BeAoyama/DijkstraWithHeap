#include "dijkstra.h"

Length *Dijkstra::Solve(const Graph<Length> &graph, const int &src, const int &dst = -1) {
    Heap<Vertex> heap(graph.enum);  // init heap

    Length *const dist = new Length[graph.vnum];
    memset(dist, 0x3f, sizeof(Length) * graph.vnum);  // init dist;

    Heap.iterator *const iterator = new Heap.iterator[graph.vnum];
    int *const inheap = new int[graph.vnum];
    memset(inheap, 0, sizeof(int) * graph.vnum);  // init inheap
    // if inheap[v] = 1 then v has already in heap

    dist[src] = 0;
    iterator[src] = heap.Push(make_pair(0, src));  // set up heap
    inheap[src] = true;
    while (!heap.empty()) {
        Vertex vertex = heap.Top(); heap.Pop();
        // the shortest path from src to dst has already been calculated
        if (vertex.id == dst) break;
        const int &u = vertex.second;
        for (int i = graph.head[u]; ~i; i = graph.edge[i].next) {
            const int &v = graph.edge[i].v;
            const Length &w = graph.edge[i].w;
            if (dist[v] > dist[u] + w) {
                // update the dis of surrounding vertices
                dist[v] = dist[u] + w;
                // already in the heap
                if (inheap[v]) iterator[v] = heap.DecreaseKey(iterator[v], make_pair(dist[v], v));
                else {
                    iterator[v] = heap.Push(make_pair(dist[v], v));
                    inheap[v] = 1;
                }
            }
        }
    }
    heap.Clear();
    delete[] iterator;
    delete[] inheap;
    return dist;
}
