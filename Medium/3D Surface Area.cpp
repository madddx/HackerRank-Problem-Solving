int surfaceArea(vector<vector<int>> A) {
    int result = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            result += 4 * A[i][j] + 2;
            if(i > 0) result -= min(A[i][j], A[i-1][j]) * 2;
            if(j > 0) result -= min(A[i][j], A[i][j-1]) * 2;
        }
    }
    return result;
}
