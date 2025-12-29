// TC : O(N logN)

string ReverseSort(string str) {
    // complete the function here
    int n  = str.length();

    sort(str.begin(),str.end());
    int i=0,j=n-1;
    
    while(i<j)
        swap(str[i++],str[j--]);
    
    return str;
 }
