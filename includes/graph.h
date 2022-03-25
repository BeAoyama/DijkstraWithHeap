#pragma once

class Graph {
private:
    struct Edge {
        int x;
        int y;
        int w;
        Edge* nxt;
    };
    typedef Edge* Eptr;
    int n;
    int m;
    Eptr* G;
    void AddEdge(int, int, int);
public:
    void Clear();
    void InputFromKeyboard();
    void InputFromFile();
};