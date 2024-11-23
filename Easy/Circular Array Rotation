vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> result;
    for(int i = 0; i < queries.size(); i++) {
        int previousIndex = (queries[i] - k + a.size() * 100000 ) % a.size();
        result.push_back(a[previousIndex]);
    }
    return result;
}
