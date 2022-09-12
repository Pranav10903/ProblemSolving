class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max=0;
	    int row=-1;
	    int ones;
	    for(int i=0;i<n;i++){
	        int g=upper_bound(arr[i].begin(),arr[i].end(),0)-arr[i].begin();
	        ones=m-g;
	        if(ones>max){
	            max=ones;
	            row=i;
	        }
	    }
	    return row;
	}
};
	    
