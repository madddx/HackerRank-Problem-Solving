 public static String organizingContainers(List<List<Integer>> container) {
    int[] capacityPerContainer = new int[container.size()];
    int[] ballCountPerType = new int[container.size()];
    for (int i = 0; i < container.size(); i++) {
      for (int j = 0; j < container.size(); j++) {
        capacityPerContainer[i] += container.get(i).get(j);
        ballCountPerType[i] += container.get(j).get(i);
      }
    }
    Arrays.sort(capacityPerContainer);
    Arrays.sort(ballCountPerType);
    for (int i = 0; i < capacityPerContainer.length; i++) {
      if (capacityPerContainer[i] < ballCountPerType[i]) {
        return "Impossible";
      }
    }
    return "Possible";
  }
