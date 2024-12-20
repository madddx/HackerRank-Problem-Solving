vector<int> stones(int n, int a, int b) {
    if(a > b){
        a = b + a;
        b = a - b;
        a = a - b;
    }
    int step = b - a;
    vector<int> result;
    for(int i = a * (n-1); i < b * (n-1); i += step) result.push_back(i);
    result.push_back(b * (n-1));
    return result;
}
