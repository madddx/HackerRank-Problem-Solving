    public static String angryProfessor(int k, List<Integer> a) {
        Collections.sort(a);
        int presentersCount =0;
        
        for(int i = 0; i < a.size(); i++){
            if(a.get(i) <= 0 && a.get(i) <1 ){
                presentersCount++;
            }
        }
        
        if(presentersCount >= k){
            return "NO";
        }
        
        return "YES";
    }
