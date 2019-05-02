//Gado Foumakoye Nadira 
#define _XOPEN SOURCE
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>

 int main(int argc , string argv[])
 {
     if(argc != 2)
 {
     printf("usage: crack <hash>\n");
     return 1;
 }

  const int letters_count = 52;
  string letters=abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string hash = argv[1];

   char salt[3];
   memcpy(salt, hash , 2);
   salt[2]= '\0';

   char key_passeword[6]= "\0\0\0\0\0\0";

   for(int fifth =0; fifth < letters_count; fifth++)
   {
      for(int fourth=0; fourth < letters_count; fourth++)
      {
          for(int third=0; third < letters_count; third++)
          {
              for(int second=0; second <letters_count; second++)
              {
                  for(int first=0; first <letters_count; first++)

    {
             key_passeword[0]= letters[fifth];
             key_passeword[1]= letters[fourth];
             key_passeword[2]= letters[third];
             key_passeword[3]= letters[second];
             key_passeword[4]= letters[first];

        if(strcmp(crypt(key_passeword,salt), hash )==0
    }
            printf("%s\n", key_passeword);
            return 0;
        }

    }
              }
          }
      }
   }

    printf("Password couldn't be craked!");
    return 1;







































