#pragma once
#include "heap.h"
#include <vector>
#include <queue>

template <class T>
class STLHeap: public MyHeap<T> {
private:
    std::priority_queue<T, std::vector<T>, std::greater<T> > PQ, lazy;
    void Maintain();
public:
    struct iterator {
        int key;
    };
    STLHeap();
    ~STLHeap();
    void Clear();
    iterator Push(T const&);
    void Pop();
    T Top() const;
    iterator DecreaseKey(iterator const&, T const&);
    bool Empty() const;
    unsigned int Size() const;
};