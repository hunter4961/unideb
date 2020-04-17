#include <stdio.h>
#include <math.h>

void kiir(double tomb[], int db) { // a tömb elemeinek kiiratása (nagyobb tömb esetén sem kell módosítani)
  int ki = -1;
  while ( ki < db-1) {
    ki++;
    printf("%f\n", tomb[ki]);
  }

}

double tavolsag(double PR[], double PRv[], int n)
{
  double osszeg = 0;
  for (int i = 0; i < n; i++)
    osszeg += (PRv[i] - PR[i]) * (PRv[i] - PR[i]);
  return sqrt(osszeg);
}

int main()
{
  double L[4][4] = {
	  {0.0, 0.0, 1.0 / 3.0, 0.0},
	  {1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
	  {0.0, 1.0 / 2.0, 0.0, 0.0},
	  {0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	double PR[4] = { 0.0, 0.0, 0.0, 0.0 };
	double PRv[4] = { 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0 };

	int i, j;

	for (;;) {

		for (i = 0; i < 4; i++) {

			PR[i] = 0.0;
			for (j = 0; j < 4; j++)

				PR[i] += (L[i][j] * PRv[j]); //végigjárjuk a PR[] tömböt és feltöltjük a szimulációs 2D L[][] tömb szerint
		}
		if (tavolsag(PR, PRv, 4) < 0.00000001)
			break;

		for (i = 0; i < 4; i++) //ha a tavolsag() 0.00000001-nél is kisebb számmal tér vissza, akkor
			PRv[i] = PR[i];      //a PRv[] elemeit lecseréljük a PR[] elemeire
	}

	kiir(PR, 4);

  return 0;
}
