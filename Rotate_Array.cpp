vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}
