#pragma once

template <class T>
class MyHeap {
public:
    virtual void Clear() = 0;
    virtual void Push(T const&) = 0;
    virtual void Pop() = 0;
    virtual T Top() const = 0;
    virtual bool Empty() const = 0;
    virtual unsigned int Size() const = 0;
};