int sockMerchant(int n, vector<int> ar) {
    vector<int> pairs(100, 0);
    for (int i: ar)
    pairs[i - 1]++;
    int pairCount = 0;
    for (int i = 0; i < 100; i++) {
        pairCount += (pairs[i] / 2);
    }
    return pairCount;
}
