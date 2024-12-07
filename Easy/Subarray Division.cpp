int birthday(vector<int> s, int d, int m) {
    if(s.size() < m) return 0;
    int su = accumulate(s.begin(), s.begin() + m, 0), result = 0;
    if(su == d) result++;
    for(int i = m; i < s.size(); i++){
        su += s[i];
        su -= s[i-m];
        if(su == d) result++;
    }
    return result;
 }
