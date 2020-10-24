#include<stdio.h>
#include<stdlib.h>
#include<conio.h>




void check (char,char);


char a[9] = {'1','2','3','4','5','6','7','8','9'};




 void position()

{

                                      printf("\n\n\n\t\t\t---|---|---\n");

                                      printf("\t\t\t%c  | %c | %c  \n",a[0],a[1],a[2]);

                                      printf("\t\t\t---|---|---\n");

                                      printf("\t\t\t%c  | %c | %c  \n",a[3],a[4],a[5]);

                                      printf("\t\t\t---|---|---\n");

                                      printf("\t\t\t%c  | %c | %c  \n",a[6],a[7],a[8]);




}




void start()

{

                                           char s;

                                           printf("\n\n\xAF\xAF\xAF\xAF\xAF\ Enter who will start the game, player_1 or player_2 : ");

                                           fflush(stdin);

                                           scanf("%c",&s);



}




void choose()

{



                                                 char p,s;

                                                 printf("\n\n\xAF\xAF\xAF\xAF\xAF\ Enter the position for the player : ");

                                                 fflush(stdin);

                                                 scanf("%c",&p);

                                                 printf("\n\n\xAF\xAF\xAF\xAF\xAF\ Enter the symbol for the player : ");

                                                 fflush(stdin);

                                                 scanf("%c",&s);

                                                 check(p,s);



}



void check(char P, char S)
{

              int i;

             for(i=0;i<=8;i++)
    {

              if(a[i] == P)

        {
             a[i]=S;

        }

    }
}



      int end()

{


                      if((a[0] == 'x'  && a[1]== 'x' && a[2]  == 'x') || (a[0]== 'x' && a[3] == 'x' && a[6] == 'x' ) || (a[0]=='x'  && a[4] == 'x' && a[8] =='x') )

                      return (100);

                      else  if((a[0] == 'o'  && a[1]== 'o' && a[2]  == 'o') || (a[0]== 'o' && a[3] == 'o' && a[6] == 'o' ) || (a[0]=='o'  && a[4] == 'o' && a[8] =='o') )

                      return (200);

                      else if (  a[1]  == 'x'   && a[4] == 'x' && a[7] == 'x' )

                      return(100);

                     else if (  a[1]  == 'o'   && a[4] == 'o' && a[7] == 'o' )

                     return(200);

                     else if (  a[2]  == 'x'   && a[5] == 'x' && a[8] == 'x' )

                     return(100);

                     else if (  a[2]  == 'o'   && a[5] == 'o' && a[8] == 'o' )

                     return(200);

                     else if (  a[3]  == 'x'   && a[4] == 'x' && a[5] == 'x' )

                     return(100);

                     else if (  a[3]  == 'o'   && a[4] == 'o' && a[5] == 'o' )

                     return(200);

                     else if (  a[2]  == 'x'   && a[4] == 'x' && a[6] == 'x' )

                    return(100);

                    else if (  a[2]  == 'o'   && a[4] == 'o' && a[6] == 'o' )

                    return(200);

                    else if (  a[6]  == 'x'   && a[7] == 'x' && a[8] == 'x' )

                   return(100);

                   else if (  a[6]  == 'o'   && a[7] == 'o' && a[8] == 'o' )

                   return(200);

                   return(300);


}



int main()
{


                                              char name,pass;

                                              int k;

                                              system(" color 0E");




              printf("\n\n\n\n\t\t\t\xAF\xAF\xAF\xAF\xAF\ Game Instructions : \xAF\xAF\xAF\xAF\xAF");

              printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\ Player_1 Symbol : x ");

              printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\ Player_2 Symbol : o ");

              printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\ At first you have to select an option about who will start the game,player_1 or player_2 : {Input 1 or 2} ");

              printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\ There are 1 - 9 positions,you need to choose where you would like to put your symbol x or o \n");

              printf("\n\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ TIC TAC TOE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");



                                                        position();

                                                        start();

                                                        choose();

                                                        label:

                                                        position();

                                                        choose();

                                                        k = end();


            if(k == 100)

             {


                 printf("\n\n\n\t\t\t\t\t\********************\ PLAYER_1 WON \********************\n\n\n\n");


             }

         else  if(k == 200)

             {


                  printf("\n\n\n\t\t\t\t\t\********************\ PLAYER_2 WON \********************\n\n\n\n");


             }



             else goto


                label;



getch();

}




