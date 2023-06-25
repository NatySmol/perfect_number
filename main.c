//
//  main.c
//  perfect_number
//
//Číslo nazveme perfektním, pokud je součtem svých (vlastních) dělitelů, tedy například 6 = 1 + 2 + 3, oproti tomu číslo 36 perfektní není, protože součet jeho dělitelů je 1 + 2 + 3 + 4 + 6 + 9 + 12 + 18 = 55. Číslo nazveme čtvercem, pokud je druhou mocninou nějakého celého čísla. Podobně číslo nazveme krychlí, pokud je třetí mocninou nějakého celého čísla. Napište program, který vyšetřuje tyto tři vlastnosti a oznámí je. Je-li číslo perfektní, vypíše 'P', je-li číslo čtverec, vypíše 'C' a pro krychli 'K' v tomto pořadí. Kupř. na vstup 64 tedy bude odpověď 'CK'.
//  Created by Natálie Smolíková on 08.10.2021.
//

#include <stdio.h>
#include <math.h>


 int cislo()
{
    int cislo = 0, vstup, znamenko = 1;
    
    vstup = getchar();
    if (vstup == 45)
    {
        znamenko = -1;
        vstup = getchar();
        
    }
    
    
    while (vstup >= 48 && (vstup <= 57))
        {
            cislo = 10 * cislo + vstup - 48;
            vstup = getchar();
            
        }
    cislo *= znamenko;
    
    return cislo;
}

int main()
    {
        int num, i=1, soucet = 0, j = 1, m = 1;
        num = cislo();
      
    if (num>0)
    {
        
        // perfektní číslo
        for(i=1; i<num;i++)     //zjistí mi dělitele
        {
            if(num%i == 0)
            {
                soucet += i;
               //printf("%d \n", i);
            }
            
        }
        if (soucet == num)
        {
           printf("P");
            
        }
       
        
        // čtverec
        for (j=1; j<=(num/2); j++)
        {
            if(sqrt(num) == j)
            {
               printf("C");
               
            }
        }

        //krychle
        for (m=1; m<=(num/2); m++)
        {
            if (pow(m, 3) == num)
            {
                printf("K");
               
            }
           
        }
        
    }
}

