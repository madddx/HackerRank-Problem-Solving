public static void kaprekarNumbers(int p, int q) {
        List<Integer> list = new ArrayList<>();
        for (int i = p; i <= q; i++) { 
            long sqr = (long) i * i;
            String str = Long.toString(sqr);
            int len = str.length();
            int numLen = Integer.toString(i).length();
            
            String r = str.substring(len - numLen);    
            String l = str.substring(0, len - numLen);  
            if (l.isEmpty()) {
                l= "0";
            }
            int sum = Integer.parseInt(l) + Integer.parseInt(r);
            if (sum == i) {
                list.add(i);
            }
        }
        if (list.isEmpty()) {
            System.out.print("INVALID RANGE");
        } else {
            for (int num : list) {
                System.out.print(num + " ");
            }
        }
    }
