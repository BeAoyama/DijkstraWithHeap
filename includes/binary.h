#pragma once

template <class T>
class BinaryHeap: public MyHeap<T> {
public:
    BinaryHeap();
    ~BinaryHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};