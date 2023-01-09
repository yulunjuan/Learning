#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int main(void)
{
	//Parking Lot
	int n;
	scanf("%d", &n);
	assert(n > 0 && n <= 10);
	int Nx[n]; int Ny[n]; int Nc[n];
	for (int i = 0; i < n; i++){
		scanf("%d%d%d", &Nx[i], &Ny[i], &Nc[i]);
	}
	//for (int i = 0; i < n; i++)
	//	printf("%d %d %d ", Nx[i], Ny[i], Nc[i]);

	//Illegally Parked Bicycles
	int m;
	scanf("%d", &m);
	assert(m > 0 && m <= 100000);
	int Mx[m], My[m];
	for (int i = 0; i < m; i++)
		scanf("%d%d", &Mx[i], &My[i]);
	//Comparing Distance
	int dx[n], dy[n];
	for (int i = 0; i < n; i++){
		dx[i] = Mx[i] - Nx[i];
		dy[i] = My[i] - Ny[i];
	}
	
	return 0;
}
