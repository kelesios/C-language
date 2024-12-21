#include <stdio.h>
#include <stdlib.h>

main()
{

	// 1. 
	int N, mikos_vimatos, apostasi, km, m, cm;

	// 2. 
	N = 1589;
	mikos_vimatos = 80;

	// 3. Ypologismoi
	distance = N * mikos_vimatos;
	km = distance / 100000;
	m = distance % 100000;
	m = m / 100;
	cm = distance % 100;

	// 4. Results
	printf("Steps = %d\nDistance = %dcm\nkm = %d\nm = %d\ncm = %d\n", N, distance, km, m, cm);


	system("Pause");
}
