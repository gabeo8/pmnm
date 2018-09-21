int sum_p(int n) {
	int tong = 0, i;
	for (i = 2; i <= 2*n; i=i+2) {
		tong = tong + i;
	}
    return tong;
}
