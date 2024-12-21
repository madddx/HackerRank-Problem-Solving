vector<string> bigSorting(vector<string> u) {
    sort(u.begin(), u.end(), [](string l, string r){
        if(l.size() == r.size()) return l < r;
        return l.size() < r.size();
    });
    return u;
}
