 public static int simpleArraySum(List<Integer> ar) {
// Write your code here
int sum=0;
List<Integer> newList=new ArrayList<>(ar);
for (int i = 0; i < newList.size(); i++) {
    sum += newList.get(i);
}
return sum;
}
