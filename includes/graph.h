#pragma once

template <typename Length>
class Graph {
private:
    struct Edge {
        int x;
        int y;
        Length w;
        Edge* nxt;
    };
    typedef Edge* Eptr;
    int n;
    int m;
    Eptr* G;
    void AddEdge(int, int, Length);
public:
    void Clear();
    void InputFromKeyboard();
    void InputFromFile();
};