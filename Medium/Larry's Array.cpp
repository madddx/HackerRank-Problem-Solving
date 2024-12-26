string larrysArray(vector<int> A) {
    if(A.size() == 2 && A[0] > A[1]) return "NO";
    else if(A.size() == 1 || A.size() == 0) return "YES";
    else {
        auto min_it = std::min_element(A.begin(), A.end());
        int tempIndex = distance(A.begin(), min_it);
        A.erase(A.begin() +  tempIndex);
        if(tempIndex % 2 != 0){
            swap(A[0], A[1]);
        }
        return larrysArray(A);
    }
}
