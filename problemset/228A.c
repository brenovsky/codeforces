#include <stdio.h>

int main()
{
	int colors[4];
	int colors2[4];
	int count = 0;
	
	for (int i = 0; i < 4; i += 1) {
		scanf("%d", &colors[i]);
	}

	for (int i = 0; i < 4; i += 1) {
		for (int j = 0; j < 4; j += 1) {
			if (colors2[j] == colors[i]) {
				count += 1;
				break;
			}
		}
		colors2[i] = colors[i];
	}
	
	printf("%d", count);
	
	return 0;
}