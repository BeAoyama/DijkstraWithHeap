#include "stlpq.h"

template <class T>
STLHeap<T>::STLHeap() {
    Clear();
}

template <class T>
STLHeap<T>::~STLHeap() {
    Clear();
}

template <class T>
void STLHeap<T>::Clear() {
    while(!PQ.empty()) PQ.pop();
}

template <class T>
void STLHeap<T>::Push(T const& x) {
    PQ.push(x);
}

template <class T>
void STLHeap<T>::Pop() {
    PQ.pop();
}

template <class T>
T STLHeap<T>::Top() const {
    return PQ.top();
}

template <class T>
bool STLHeap<T>::Empty() const {
    return PQ.empty();
}

template <class T>
unsigned int STLHeap<T>::Size() const {
    return PQ.size();
}