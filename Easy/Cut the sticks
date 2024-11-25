int recurse(vector<int>& r, vector<int> arr, int min) {
  int res = 0;
  vector<int> v;
  
  r.push_back(arr.size());
  
  for(auto& a : arr) {
    if ((a - min) > 0) {
      v.push_back(a - min);
      res++;
    }
  }
  min = *min_element(v.begin(),v.end());
  if(res > 0)
    recurse(r, v, min);
    
  return res;
}

vector<int> cutTheSticks(vector<int> arr) {
  vector<int> res;

  int min = *min_element(arr.begin(),arr.end());
  recurse(res, arr, min);
  
  return res;
}
