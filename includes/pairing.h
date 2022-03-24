#pragma once

template <class T>
class PairingHeap: public MyHeap<T> {
public:
    PairingHeap();
    ~PairingHeap();
    void Clear();
    void Push(T const&);
    void Pop();
    T Top() const;
    bool Empty() const;
    unsigned int Size() const;
};