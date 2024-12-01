import java.util.*;

public final class Solution {
  public static final void main(String[] args) {
    int n, rq, cq;
    Set<Long> o;
    try (Scanner in = new Scanner(System.in)) {
      n = in.nextInt();
      int k = in.nextInt();
      rq = in.nextInt();
      cq = in.nextInt();
      o = new HashSet<>(k);
      while (k --> 0) {
        int ro = in.nextInt(), co = in.nextInt();
        o.add((long)ro << 32 | co);
      }
    }
    int t = 0;
    for (int d[] : new int[][] {{-1, -1}, {-1,  0}, {-1, +1},
                                { 0, -1},           { 0, +1},
                                {+1, -1}, {+1,  0}, {+1, +1}}) {
      for (int r = rq + d[0], c = cq + d[1];
           1 <= r && r <= n && 1 <= c && c <= n && !o.contains((long)r << 32 | c);
           r += d[0], c += d[1]) {
        t++;
      }
    }
    System.out.println(t);
  }
}
