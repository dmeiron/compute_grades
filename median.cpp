
//
// Created by dim on 3/9/20.
//
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

double median (vector<double> vec) {
    typedef vector<double>::size_type vec_sz;

    vec_sz size = vec.size();
    if (size == 0 ) {
        throw std::domain_error("median of an empty vector");
    }

    sort(vec.begin(), vec.end());

    vec_sz mid = size/2;

    double med;

    if (size%2 ==0) {
        med = (vec[mid] + vec[mid-1])/2;
    }
    else {
        med = vec[mid];
    }
    return med;
}

