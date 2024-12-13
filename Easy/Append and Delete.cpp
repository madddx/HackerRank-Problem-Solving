string appendAndDelete(string s, string t, int k) {
  
  int sl = s.length();
  int tl = t.length();
  
  if(k > (sl + tl))
    return "Yes";
  
  int length = 0;
  int diffLength = 0;
  if(sl >= tl) {
    length = tl;
    diffLength = sl - tl;
  }
  else {
    length = sl;
    diffLength = tl - sl;
  }
  if(diffLength > k)
    return "No";
  
  int diffIndex = length;
  for(int i = 0; i < length; i++) {
    if(s[i] != t[i]) {
      diffIndex = i;
      break;
    }
  }
  
  int operations = (sl + tl - 2*diffIndex);
  if(operations == k || (operations % 2 == k % 2 && operations < k))
    return "Yes";
    
  return "No";
}
