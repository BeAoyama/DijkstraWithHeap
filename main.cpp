#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include "heap.hpp"
#include "binary.hpp"
#include "binomial.hpp"
#include "fibonacci.hpp"
#include "stlpq.hpp"
#include "dijkstra.hpp"
#include "test.hpp"

int main() {
    STLHeap<int>* mpq = new STLHeap<int>;
    mpq->Push(3);
    mpq->Push(5);
    mpq->Push(4);
    printf("%d\n", mpq->Top());
    return 0;
}