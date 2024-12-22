string gridSearch(vector<string> G, vector<string> P) {
  bool found = false;
  for(int i = 0; i < G.size(); i++) {
    int ind = G[i].find(P[0]);
    while(ind != string::npos) {
      found = true;
      for(int j = 1; j < P.size(); j++){
        if(i+j >= G.size() || G[i+j].find(P[j], ind) != ind) {
          found = false;
          break;
        }
      }
      if(found)
        return "YES";
      ind = G[i].find(P[0], ind+1);
    }
  }
  return "NO";
}
