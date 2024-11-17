int countingValleys(int steps, string path) {
    int res = 0, level = 0;
    for(char c : path){
        if(c == 'U'){
            level++;
            if(level == 0) res ++;
        }
        else level--;
    }
    return res;
}
