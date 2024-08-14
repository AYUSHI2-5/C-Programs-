#include<stdio.h>
main()
{
 int pizza,dhosa,maggi,idli;
 int pizzaq,dhosaq,maggiq,idliq;
 pizza=100;
 dhosa=60;
 maggi=40;
 idli=30;
 printf("\n How many Pizza(100 Rs PP)=> ");
 scanf("%d",&pizzaq);
 printf("\n How many Dhosa(60 Rs PP)=> ");
 scanf("%d",&dhosaq);
 printf("\n How many Maggi(40 Rs PP)=> ");
 scanf("%d",&maggiq);
 printf("\n How many idli(30 Rs PP)=> ");
 scanf("%d",&idliq);
 
 printf("\n You're Total is=> %d",(pizza*pizzaq)+(dhosa*dhosaq)+(maggi*maggiq)+(idli*idliq));
}