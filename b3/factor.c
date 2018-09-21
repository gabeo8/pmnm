int factor(int n) {
    int gt = 1;
    int i;
    for (i = 1; i <=n; i++) gt = gt*i;
    return gt;
}
