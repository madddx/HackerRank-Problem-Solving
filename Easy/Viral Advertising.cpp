int viralAdvertising(int n) {
    int ans = 0, shared = 5;
    for(int i = 1; i <= n; i++){
        ans += shared / 2;
        shared = (shared/2)*3;
    }
    return ans;
}  
