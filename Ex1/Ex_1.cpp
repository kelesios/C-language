#include <stdio.h>
#include <stdlib.h>

main()
{

	int N, step_meter, distance, km, m, cm;

	// 2. Arxikopoiisi metavliton
	N = 1589;
	step_meter = 80;

	// 3. Ypologismoi
	distance = N * step_meter;
	km = distance / 100000;
	m = distance % 100000;
	m = m / 100;
	cm = distance % 100;

	// 4. Apotelesmata
	printf("Steps = %d\nDistance = %dcm\nkm = %d\nm = %d\ncm = %d\n", N, distance, km, m, cm);

	// Anamoni pliktrou apo ton xristi gia eksodo
	system("Pause");
}
