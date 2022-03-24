#pragma once

template <class T>
class BinomialHeap: public MyHeap<T> {
public:
    BinomialHeap();
    ~BinomialHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};