#pragma once

template <class T>
class LeftistTree: public MyHeap<T> {
public:
    LeftistTree();
    ~LeftistTree();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};