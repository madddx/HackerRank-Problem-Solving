string happyLadybugs(string b) {
    vector<int> occ(26, 0);
    bool happy = true, underscore = false;
    b = "0"+b+"0";
    for(int i = 1; i < b.size()-1; i++){
        if(b[i] != '_' && b[i] != b[i-1] && b[i] != b[i+1]) happy = false;
        if(b[i] == '_') underscore = true;
        else occ[b[i] - 'A']++;
    }
    if(happy) return "YES";
    if(underscore && find(occ.begin(), occ.end(), 1) == occ.end()) return "YES";
    return "NO";
}
