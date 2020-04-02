#define OLVASAS_BUFFER 256
#define KULCS_MERET 8
#define _GNU_SOURCE

#include &lt;stdio.h>
#include &lt;unistd.h>
#include &lt;string.h>


double
atlagos_szohossz (const char *titkos, int titkos_meret)
{
  int sz = 0;
  for (int i = 0; i &lt; titkos_meret; ++i)
    if (titkos[i] == ' ')
      ++sz;
  
  return (double) titkos_meret / sz;
}

int
tiszta_lehet (const char *titkos, int titkos_meret)
{

  double szohossz = atlagos_szohossz (titkos, titkos_meret);

  return szohossz > 6.0 &amp;&amp; szohossz &lt; 9.0
    &amp;&amp; strcasestr (titkos, "hogy") &amp;&amp; strcasestr (titkos, "nem")
    &amp;&amp; strcasestr (titkos, "az") &amp;&amp; strcasestr (titkos, "ha");

}

void
exor (const char kulcs[], int kulcs_meret, char titkos[], int titkos_meret)
{

  int kulcs_index = 0;

  for (int i = 0; i &lt; titkos_meret; ++i)
    {

      titkos[i] = titkos[i] ^ kulcs[kulcs_index];
      kulcs_index = (kulcs_index + 1) % kulcs_meret;

    }

}

int
exor_tores (const char kulcs[], int kulcs_meret, char titkos[],
	    int titkos_meret)
{

  exor (kulcs, kulcs_meret, titkos, titkos_meret);

  return tiszta_lehet (titkos, titkos_meret);

}

int
main (void)
{

  char kulcs[KULCS_MERET];
  char titkos[MAX_TITKOS];
  char *p = titkos;
  int olvasott_bajtok;

  while ((olvasott_bajtok =
	  read (0, (void *) p,
		(p - titkos + OLVASAS_BUFFER &lt;
		 MAX_TITKOS) ? OLVASAS_BUFFER : titkos + MAX_TITKOS - p)))
    p += olvasott_bajtok;

  for (int i = 0; i &lt; MAX_TITKOS - (p - titkos); ++i)
    titkos[p - titkos + i] = '\0';

  for (int ii = '0'; ii &lt;= '9'; ++ii)
    for (int ji = '0'; ji &lt;= '9'; ++ji)
      for (int ki = '0'; ki &lt;= '9'; ++ki)
	for (int li = '0'; li &lt;= '9'; ++li)
	  for (int mi = '0'; mi &lt;= '9'; ++mi)
	    for (int ni = '0'; ni &lt;= '9'; ++ni)
	      for (int oi = '0'; oi &lt;= '9'; ++oi)
		for (int pi = '0'; pi &lt;= '9'; ++pi)
		  {
		    kulcs[0] = ii;
		    kulcs[1] = ji;
		    kulcs[2] = ki;
		    kulcs[3] = li;
		    kulcs[4] = mi;
		    kulcs[5] = ni;
		    kulcs[6] = oi;
		    kulcs[7] = pi;
			
		    if (exor_tores (kulcs, KULCS_MERET, titkos, p - titkos))
		      printf
			("Kulcs: [%c%c%c%c%c%c%c%c]\nTiszta szoveg: [%s]\n",
			 ii, ji, ki, li, mi, ni, oi, pi, titkos);

		    exor (kulcs, KULCS_MERET, titkos, p - titkos);
		  }

  return 0;
}

