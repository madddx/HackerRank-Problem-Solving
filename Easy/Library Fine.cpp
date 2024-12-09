int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int res = 0;
    if(y1<y2 || (y1 == y2 && m1<m2) || (y1 == y2 && m2 == m1 && d1<=d2)) return 0;
    if(y2 == y1){
        if(m1 == m2) return 15 * (d1 - d2);
        else return (m1 - m2) * 500;
    }
    else return 10000;
    return 0;
}
