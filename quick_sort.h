#ifndef ALGORITHMS_QUICK_SORT_H
#define ALGORITHMS_QUICK_SORT_H

#include <vector>

// Sorts the iterator range in-place using quick-sort.
template <typename RandomAccessIt> void quick_sort(RandomAccessIt begin, RandomAccessIt end) {
    if (begin >= end) return;

    const decltype(*begin) &pivot = *begin;
    RandomAccessIt i = begin + 1, j = end - 1;
    while (i < j) {
        while (*i <= pivot && i < end) i++;
        while (*j >= pivot && j > begin) j--;

        if (i < j) {
            std::swap(*i, *j);
        }
    }
    std::swap(*begin, *j);

    quick_sort(begin, j);
    quick_sort(j + 1, end);
}

#endif //ALGORITHMS_QUICK_SORT_H
