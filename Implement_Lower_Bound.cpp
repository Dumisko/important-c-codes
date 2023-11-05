int lowerBound(vector<int> arr, int n, int x) {
	int s =0;
	int e = n-1;
int index = -1;
	while(s<=e){
		int mid = s+ (e-s)/2;

		if( x<= arr[mid]){

           index = mid;
			e = mid-1;
		}

		else if(x> arr[mid]){
			if(mid== n-1){
				index = mid+1;
				break;
			}
             index = mid+1;
			s = mid+1;
		}
	}
	return index;
}