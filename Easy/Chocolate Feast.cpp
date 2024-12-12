int chocolateFeast(int n, int c, int m) {
    int result = 0, wrappers = 0;
    while( n >= c){
        result ++;
        wrappers ++;
        n -= c;
        if(wrappers == m){
            result ++;
            wrappers = 1;
        }
    }
    return result;
}
