    int countApple = 0;
    int countOrange = 0;

    for (int i = 0; i < apples.size(); i++) {

        if ((a + apples.get(i)) >= s && (a + apples.get(i)) <= t) {
            countApple++;
        }

    }
    for (int i = 0; i < oranges.size(); i++) {
        if ((oranges.get(i) + b) >= s && (oranges.get(i) + b) <= t) {
            countOrange++;
        }
    }
    System.out.println(countApple);
    System.out.println(countOrange);
}
}
