#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int number = 0;

void insertionSortAdvanced(vector<int>& v1, vector<int>& v2, int start, int end){
    if(end-start < 2){
        return;
    }    
    int mid = (start+end)/2, i, j, k, temp;
    insertionSortAdvanced(v2,v1,start,mid);
    insertionSortAdvanced(v2,v1,mid,end);
    i = mid-1;
    j = k = end-1;
    
    while(i>=start && j>=mid){
        if(v1.at(j)>=v1.at(i)){
            v2[k--] = v1[j--];
        } else {
            number += j - mid + 1;
            v2[k--] = v1[i--];
        }
    }
    while(i >= start){
        v2[k--] = v1[i--];
    }
    while(j >= mid){
        v2[k--] = v1[j--];
    }
}


int main() {
    int input;
    cin >> input;
    while(input--){
        vector<int> v1;
        int total,i;
        cin>>total;
        for(i=0;i<total;++i){
            int n;
            cin>>n;
            v1.push_back(n);
        }
        number = 0;
        int start = 0;
        int end = v1.size();
        vector<int> v2(v1);
        insertionSortAdvanced(v1, v2, start, end);     
        cout << number <<endl;
    } 
    return 0;
}
