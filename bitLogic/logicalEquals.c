int equals(int x, int y) {
	if (!(~(~x^y))) {
		return 1;
	}
	return 0;
}
