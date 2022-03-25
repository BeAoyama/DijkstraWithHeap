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
    while(!lazy.empty()) lazy.pop();
}

template <class T>
STLHeap<T>::iterator STLHeap<T>::Push(T const& x) {
    Maintain();
    PQ.push(x);
    return STLHeap<T>::iterator{x};
}

template <class T>
void STLHeap<T>::Pop() {
    Maintain();
    PQ.pop();
}

template <class T>
T STLHeap<T>::Top() const {
    Maintain();
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

template <class T>
void STLHeap<T>::Maintain() {
    while (!PQ.empty() && !lazy.empty() && PQ.top() == lazy.top()) {
        PQ.pop();
        lazy.pop();
    }
}

template <class T>
STLHeap<T>::iterator STLHeap<T>::DecreaseKey(STLHeap<T>::iterator const& it, T const& x) {
    PQ.push(x);
    lazy.push(it.key);
}