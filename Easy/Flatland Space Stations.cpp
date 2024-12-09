int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());
    int result = c[0];
    for(int i = 1; i < c.size(); i++){
        result = max(result, (c[i] - c[i-1]) / 2 );
    }
    result = max(result, n - 1 - c[c.size() - 1]);
    return result;
}
