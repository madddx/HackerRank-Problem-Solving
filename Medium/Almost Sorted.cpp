void almostSorted(vector<int> arr) {
    vector<int> s, e, copy = arr;
    map<int, int> mp;
    for(int i = 0; i < arr.size(); i++) mp[arr[i]] = i;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        if( arr[i] != copy[i] ){
             s.push_back(i);
             e.push_back(mp[arr[i]]);
        }
    }
    if(s.size() == 0) cout << "yes";
    if(s.size() == 2) cout << "yes" << endl << "swap " << s[0] + 1 << " " << e[0] + 1;
    else {
        reverse(s.begin(), s.end());
        if(s == e) cout << "yes" << endl << "reverse " << s[s.size() - 1] + 1 << " " << s[0] + 1;
        else cout << "no";
    }
}
