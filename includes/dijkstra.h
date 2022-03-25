#pragma once
#include "graph.hpp"

template <typename Length, template <typename> class Heap>
class Dijkstra {
    typedef pair<Length, int> Vertex;
public:
    Length *Solve(const Graph<Length> &, const int &, const int &)
};