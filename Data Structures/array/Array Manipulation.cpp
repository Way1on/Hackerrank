long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> dp(n+2,0);
    
    for(int i=0;i<queries.size();i++){
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        
        dp[a] = dp[a] + k;
        dp[b+1] = dp[b+1] - k;
    }
    long m = 0,sum = 0;
    for(long v:dp){
        sum = sum + v;
        m = max(sum,m);
    }
    return m;
    
    
}
