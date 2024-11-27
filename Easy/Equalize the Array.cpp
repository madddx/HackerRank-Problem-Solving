int equalizeArray(vector<int> arr) {
    map<int, int>mp;
    int mx = 0;
    for(int el: arr) {
        mp[el]++;
        if(mp[el]>mx) mx = mp[el];
    }
    return arr.size() - mx;
}
