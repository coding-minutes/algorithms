int maxSubArray(vector<int>& arr) {
        int maxEndingHere=0;
        int maxSoFar=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            maxEndingHere+=arr[i];
            maxEndingHere=max(arr[i],maxEndingHere);
            maxSoFar=max(maxEndingHere,maxSoFar);
        }
        return maxSoFar;
        
}