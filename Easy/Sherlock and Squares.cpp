int squares(int a, int b) {
    int i = ceil(sqrt(a)), result = 0;
    for(; i * i <= b; i++) result++;
    return result;
}
