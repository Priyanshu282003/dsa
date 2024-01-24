int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){



vector<int> ans;

int i=0,j=0,IIg=k;

while(k>0){

if(arr1[i]<arr2[j]){

ans.push_back(arr1[i]);

i++;

k--;

}else if(arr1[i]>arr2[j]){

ans.push_back(arr2[j]);

j++;

k--;

}else if(arr1[i]==arr2[j]){

ans.push_back(arr1[i]);

i++;

k--;

}

}

return ans[IIg-1];

}