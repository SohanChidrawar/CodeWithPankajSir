// TC: O(N)

//  Function to find the peak element
int peakElement(int *arr, int n) {
    // code here
    if(n==1)
        return 0;
        
    // first element is peak
    if(arr[0]>arr[1])
        return 0;
        
    // last element is peak
    if(arr[n-1]>arr[n-2])
        return n-1;
        
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            return i;
    }
    
    return -1;
}
