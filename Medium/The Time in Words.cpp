const map<int, string> nums{
    {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"},
    {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"},
    {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"},
    {15, "quarter"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"},
    {19, "nineteen"}, {20, "twenty"}, {21, "twenty one"}, {22, "twenty two"},
    {23, "twenty three"}, {24, "twenty four"}, {25, "twenty five"},
    {26, "twenty six"}, {27, "twenty seven"}, {28, "twenty eight"},
    {29, "twenty nine"}, {30, "thirty"}};
    
string timeInWords(int h, int m) {
  
  if (m == 0) {
    return nums.at(h) + " o' clock";
  } else
  if(m > 30) {
    m = 60 - m;
    
    return nums.at(m) + 
      (m != 15 ? ((m == 1 || m == 21) ? " minute" : " minutes") : "") +
      " to " + nums.at((h+1 < 12) ? h+1 : 1);
  } else 
  if (m == 30) {
    return "half past " + nums.at(h);
  } else {
    return nums.at(m) + 
      (m != 15 ? ((m == 1 || m == 21) ? " minute" : " minutes") : "") +
      " past " + nums.at(h);
  }
}
