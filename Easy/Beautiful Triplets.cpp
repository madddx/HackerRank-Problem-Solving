int beautifulTriplets(int d, vector<int> arr) {
  int res = 0;
  for(auto it = arr.begin(); it < arr.end(); it++) {
    auto a = find(it+1, arr.end(), *(it)+d);
    if(a != arr.end()) {
      auto b = find(a+1, arr.end(), *(a)+d);
        if(b != arr.end()) res++;
    }
  }
  return res;
}
