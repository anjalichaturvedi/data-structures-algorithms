#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp;
    temp = arr[0];
    for (int i=0; i<n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    
    return arr;
}
