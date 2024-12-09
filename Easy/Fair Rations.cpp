string fairRations(vector<int> B) {
  int res = 0;
  char pattern[3];

  for(size_t i = 0; i < B.size() - 1; i++) {
    pattern[0] = B[i] % 2 == 0 ? 'E' : 'O';
    pattern[1] = B[i + 1] % 2 == 0 ? 'E' : 'O';
    pattern[2] = 0;

    if(((i + 1) == (B.size() - 1)) &&
       (strcmp(pattern, "OE") == 0 ||
        strcmp(pattern, "EO") == 0)) {
      return "NO";
    }

    if (strcmp(pattern, "OO") == 0 || 
        strcmp(pattern, "OE") == 0) {
      B[i] += 1;
      B[i + 1] += 1;
      res+=2;
    } 
  }
  
  return to_string(res);
}
