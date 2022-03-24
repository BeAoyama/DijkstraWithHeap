#pragma once
#include "heap.h"
#include <vector>
#include <queue>

template <class T>
class STLHeap: public MyHeap<T> {
private:
    std::priority_queue<T, std::vector<T>, std::greater<T> > PQ;
public:
    STLHeap();
    ~STLHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};