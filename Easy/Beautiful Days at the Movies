int beautifulDays(int i, int j, int k) {
    int ans = 0;
    for(int el = i; el <= j; el++){
        string s = to_string(el);
        reverse(s.begin(), s.end());
        if(abs(stoi(s) -el ) % k == 0) ans++;
    }
    return ans;
}
