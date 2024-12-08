vector<int> permutationEquation(vector<int> p) {
    vector<int> indexes(p.size() + 1), result;
    for(int i = 1; i <= p.size(); i++) indexes[p[i-1]] = i;
    for(int i = 1; i <= p.size(); i++) result.push_back(indexes[indexes[i]]);
    return result;
}
