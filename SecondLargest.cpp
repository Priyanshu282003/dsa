#include <vector>
#include <climits>

int second_smallest(std::vector<int> a, int n) {
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int sSmallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < small) {
            sSmallest = small;
            small = a[i];
        } else if (a[i] < sSmallest && a[i] != small) {
            sSmallest = a[i];
        }
    }
    return sSmallest;
}

int second_largest(std::vector<int> a, int n) {
    if (n < 2)
        return -1;
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] > slargest && a[i] != largest) {
            slargest = a[i];
        }
    }
    return slargest;
}

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    int sSmallest = second_smallest(a, n);
    int slargest = second_largest(a, n);
    return {slargest, sSmallest};
}
