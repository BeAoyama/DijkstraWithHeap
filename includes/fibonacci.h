#pragma once

template <class T>
class FibonacciHeap: public MyHeap<T> {
public:
    FibonacciHeap();
    ~FibonacciHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};