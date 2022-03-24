#pragma once

template <class T>
class SkewHeap: public MyHeap<T> {
public:
    SkewHeap();
    ~SkewHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};