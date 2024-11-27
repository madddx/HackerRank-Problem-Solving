int jumpingOnClouds(vector<int> c) {
    int result = 0, index = 0;
    while(index < c.size() - 1){
        if(c[index + 2] == 1) index++;
        else index+=2;
        result++;
    }
    return result;
}
