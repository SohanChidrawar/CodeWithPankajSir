// TC: O(N)


int countFreq(int arr[], int n, int target) {
    // code here..
    //int m = sizeof(arr)/sizeof(arr[0]);
    int count  = 0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
            count++;
    }
    return count;
}
