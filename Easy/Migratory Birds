public static int migratoryBirds(List<Integer> arr) {
    // Write your code here

    HashMap<Integer, Integer> map = new HashMap<>();

    for (int i = 0; i < arr.size(); i++) {

        if (map.containsKey(arr.get(i))) {
            map.put(arr.get(i), map.get(arr.get(i)) + 1);

        } else {
            map.put(arr.get(i), 1);
        }

    }
    int max = 0;
    for (int i : map.keySet()) {

        if (map.get(i) > max) {
            max = map.get(i);
        }
    }

    List<Integer> list = new ArrayList<>();

    for (int i : map.keySet()) {
        if (map.get(i) == max) {
            list.add(i);

        }
    }

    int finalMin = list.get(0);
    for (int i = 1; i < list.size(); i++) {
        if (list.get(i) < finalMin) {
            finalMin = list.get(i);

        }
    }

    return finalMin;

}
