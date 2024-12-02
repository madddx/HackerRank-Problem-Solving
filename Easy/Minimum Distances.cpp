int minimumDistances(vector<int> a) {
    map<int, int>mp;
    int result = 1000;
    for(int i = 0; i < a.size(); i++){
        if(mp[a[i]]){
            result = min(result, i + 1 - mp[a[i]]);
        }
        mp[a[i]] = i+1;
    }
    return (result == 1000) ? -1:result;
}
