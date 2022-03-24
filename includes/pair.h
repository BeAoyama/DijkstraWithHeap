#pragma once

template <class T>
class PairHeap: public MyHeap<T> {
public:
    PairHeap();
    ~PairHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};