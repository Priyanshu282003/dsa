#include<bits/stdc++.h>
int missingNumber(vector<int>&a, int N) {
   int XOR1=0;
   for(int i=1; i<=N; i++){
       XOR1=XOR1^i;

   }
   int XOR2=0;
   for(int i=0; i<a.size(); i++){
       XOR2=XOR2^a[i];

   }

   return XOR1^XOR2;
}