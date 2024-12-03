int workbook(int n, int k, vector<int> arr) {
    int page = 1, chapter = 1, fe = 1, res = 0;
    while(chapter <= arr.size()){
        int le = min(fe + k - 1, arr[chapter-1]);
        if(fe <= page && page <= le) res++;
        fe = le + 1;
        if(fe > arr[chapter-1]) {
            chapter++;
            fe = 1;
        }
        page ++;
    }   
    return res;
}
