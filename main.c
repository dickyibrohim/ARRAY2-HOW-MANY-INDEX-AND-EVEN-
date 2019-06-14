#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
int main()
{ int sum=0, loop1;
//Jumlah Array dan EVEN (GENAP) OR ODD (Mitile (Kelipatan)
    int nilai [100]={2,5,7,8,6,9,10,1,8};

      for (loop1=0;nilai[loop1]!=0;loop1++)
    {
        //TAMPILKAN YANG GENAP SAJA
        if (nilai[loop1]%2==0)
        {
            printf ("Even= %d\n",nilai[loop1]);
        }

    }

      for (loop1=0;nilai[loop1]!=0;loop1++)
    {
        //BERAPA JUMLAH INDEX ARRAY
        sum++;
    }
    printf ("Banyak Index= %d\n",sum);


    /*
      for (loop1=0;nilai[loop1]!=0;loop1++)
    {
        //TAMPILKAN YANG HABIS DIBAGI 5
            if (nilai[loop1]%5==0)
        {
            printf ("Mutiple 5= %d\n",nilai[loop1]);
        }
    }
    */

    return 0;
}
