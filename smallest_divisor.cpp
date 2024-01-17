#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int>& arr, int div) {
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        sum = sum + ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size();  // Added this line to define 'n'
    if (n > limit)  return -1;  // Changed 'n' to 'arr.size()'
    int low = 1, high = *max_element(arr.begin(), arr.end());
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Added '+' to fix the syntax error
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
