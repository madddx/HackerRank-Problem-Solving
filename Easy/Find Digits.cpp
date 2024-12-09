int findDigits(int n) {
    int result = 0, original = n;
    while(n){
        int d = n % 10;
        if(d != 0 && original % d == 0) result ++;
        n /= 10;
    }
    return result;
}
