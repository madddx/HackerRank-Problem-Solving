public static List<Integer> absolutePermutation(int n, int k) {
  // Write your code here

  List<Integer> result = new ArrayList<>();

  if (k == 0) {
    for (int i = 1; i <= n; i++) {
      result.add(i);
    }
    return result;
  }
  if (n % (2 * k) != 0 || k > n || n == 0) {
    return Collections.singletonList(-1);
  }

  boolean add = true; // add or substract
  for (int i = 1; i <= n; i++) {
    if (add) {
      result.add(i + k);

    } else {
      result.add(i - k);
    }

    if (i % k == 0) {
      add = !add;
    }
  }

  return result;
}
}
