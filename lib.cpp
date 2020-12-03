int Mini(int mas[], int size, int findex) {
	for (int i = 0; i < size; i++) {
		if (mas[i] < 0 && mas[i] > mas[findex]) {
			findex = i;
		}
	};
	return findex;
};
