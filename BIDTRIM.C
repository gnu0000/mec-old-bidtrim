/*
 *
 * bidtrim.c
 * Tuesday, 2/9/1999.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

CHAR szCall [16];
CHAR sz[256];

void ListBidders (FILE *fp)
   {
   while (FilReadLine (fp, sz, ";", 256) != -1)
      {
      psz = sz + (*sz == " ");
      if (!strnicmp (psz, "LETPROP"))
         {
         strncpy (szCall, psz+9, 3);
         szCall[4] = '\0';
         }
      if (!strnicmp (psz, "BIDDERS"))
         {
         strncpy (szBidderID, psz+9, 8);
         szBidderID[9] = '\0';
         strncpy (szBid, psz+24, 8);

         }
      


      psz = (*sz == " " ? sz+1 : sz);


      }
   }


int main (int argc, char *argv[])
   {
   
   return 0;
   }

