int cntarrays(vector<int> a, int value){
    int subarrays=1;
    long long valueOfSubarray=0;
    for(int i=0;i<a.size();i++){
        if(valueOfSubarray+a[i]<=value){
            valueOfSubarray+=a[i];
        }
        else{
            subarrays++;
            valueOfSubarray=a[i];
        }
    }
    return subarrays;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    if(a.size()<k){
        return -1;
    }
    int low=*max_element(a.begin(), a.end()), high=accumulate(a.begin(), a.end(), 0);
    while(low<=high){
        int mid=(low+high)/2;
        if(cntarrays(a, mid)>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}