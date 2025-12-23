// concept of prefix sum is use. Directly for loop use karun prefix sum calculate kela aani tya maxn sobat compare kela and value predict keli

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n+2,0);
    long maxn = 0;
    long currsum = 0;
    for(auto &q: queries)
    {
        int a = q[0];
        int b = q[1];
        int k = q[2];
        
        arr[a] += k;
        arr[b+1] -= k;
    }
    
    // for(int i=1;i<=n;i++)
    //     arr[i] += arr[i-1];
         
    for(int i=0;i<=n;i++)
    {
        currsum += arr[i];
        if(currsum>maxn)
            maxn = currsum;
    }
    return maxn;
    
}
