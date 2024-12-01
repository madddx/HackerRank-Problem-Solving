    public static String encryption(String s) {
        
        // Write your code here
        s=s.replaceAll(" ", "");
        int len = s.length();
        int col = (int) Math.ceil(Math.sqrt(len));
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i<col ;i++){
            if (i>0) sb.append(" ");
            for (int j = i; j<len ;j+=col){
                sb.append(s.charAt(j));
            }
        }
        return sb.toString();
    }
