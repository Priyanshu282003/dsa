#include<bits/stdc++.h>
int consecutiveOnes(vector<int>& arr){
    int maxi=0;
    int cnt=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>maxi){
                maxi=cnt;
            }
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}