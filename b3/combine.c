int combine(int n, int k) {
    //combine(n,k) = n!/(k!(n-k)!) 
    return factor(n) / (factor(k)*factor(n - k));
}
