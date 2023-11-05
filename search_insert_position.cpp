#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int m)
{
	int s =0;
	int e = arr.size() -1;
    int index = 0;
	while(s<=e){
		int mid = s+ (e-s)/2;

	if(  arr[mid]== m){
         return  mid;
	}

    else if(m> arr[mid]){
          index = mid +1;
	     s= mid+1;
    }
	else if(m< arr[mid]){	

		index = mid;
		e = mid -1;
	}
	}
	return index;
}