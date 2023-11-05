
int upperBound(vector<int> &arr, int x, int n){
	int s =0;
	int e = n-1;
int index = -1;
	while(s<=e){
		int mid = s+ (e-s)/2;

		if(  arr[mid]<= x){
           index = mid+1;
			s = mid+1;
		}

		else if(x< arr[mid]){	
			if(mid == 0){
				index =mid;
				break;
			}
			e = mid-1;
		}
	}
	return index;
}