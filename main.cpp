#include <iostream>
#include "conio2.h"
#include "quiz.h"
using namespace std;

int main()
{
   int c,choice,type;
   textcolor(LIGHTGREEN);
   for(int i=1;i<=80;i++)
    cout<<"*";
   textcolor(LIGHTRED);
   gotoxy(32,2);
   cout<<"Quiz Application";
   gotoxy(1,3);
   textcolor(LIGHTGREEN);
   for(int i=1;i<=80;i++)
    cout<<"*";
   gotoxy(20,10);
   textcolor(YELLOW);
   cout<<"WELCOME TO TECH TEST - QUIZ APPLICATION";
   gotoxy(20,14);
   textcolor(LIGHTGREEN);
   cout<<"TEST YOUR SKILLS! IMPROVE YOUR KNOWLEDGE!";
   gotoxy(1,20);
   textcolor(WHITE);
   cout<<"Press any key to continue";
   getch();
   Admin::create_admin("uadmin","abc","Sakshi");
   do
   {
       clrscr();
       gotoxy(1,1);
       textcolor(LIGHTGREEN);
       for(int i=1;i<=80;i++)
         cout<<"*";
       gotoxy(1,3);
       textcolor(LIGHTGREEN);
       for(int i=1;i<=80;i++)
         cout<<"*";
       textcolor(LIGHTRED);
       gotoxy(32,2);
       cout<<"Quiz Application";
       gotoxy(58,4);
       textcolor(WHITE);
       cout<<"Press 0 to Exit/Go Back";
       gotoxy(1,8);
       textcolor(YELLOW);
       for(int i=1;i<=80;i++)
         cout<<"*";
       gotoxy(1,18);
       for(int i=1;i<=80;i++)
         cout<<"*";
       gotoxy(32,10);
       cout<<"1. ADMIN";
       gotoxy(32,12);
       cout<<"2. STUDENT";
       gotoxy(32,14);
       cout<<"Select your role:";
       textcolor(WHITE);
       cin>>type;
       if(type==0)
       {
           break;
       }
       cin.ignore();
       if(type==1)
       {
           Admin adminObj;
           do
           {
                c=adminObj.input();
                if(c==0)
                {
                   gotoxy(30,14);
                   textcolor(LIGHTRED);
                   cout<<"Login Cancelled";
                   gotoxy(1,20);
                   textcolor(WHITE);
                   cout<<"Press any key to continue";
                   getch();
                   break;
                }
           c=adminObj.checkUserExists("admin");
           if(c==1)
           {
               gotoxy(28,20);
               textcolor(LIGHTGREEN);
               cout<<"Login Accepted!";
               gotoxy(28,20);
               cout<<"Welcome "<<adminObj.getName();
               gotoxy(28,22);
               textcolor(WHITE);
               cout<<"Press any key to continue!";
               getch();
               while(1)
               {
                   clrscr();
                   textcolor(LIGHTGREEN);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(1,3);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(32,2);
                   cout<<"QUIZ APPLICATION";
                   textcolor(LIGHTGREEN);
                   gotoxy(35,6);
                   cout<<"ADMIN MENU"<<endl;
                   textcolor(YELLOW);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(32,8);
                   cout<<"1. Add Questions";
                   gotoxy(32,9);
                   cout<<"2. Add Student";
                   gotoxy(32,10);
                   cout<<"3. Show Questions";
                   gotoxy(32,11);
                   cout<<"4. Show Students";
                   gotoxy(32,12);
                   cout<<"5. Remove Question";
                   gotoxy(32,13);
                   cout<<"6. Remove Student";
                   gotoxy(32,14);
                   cout<<"7. Exit";
                   gotoxy(32,16);
                   cout<<"Enter Choice:";
                   textcolor(WHITE);
                   cin>>choice;
                   switch(choice)
                   {
                   case 1:
                       clrscr();
                       adminObj.addQuestion();
                       break;
                   case 2:
                       clrscr();
                       adminObj.addStudent();
                       break;
                   case 3:
                       clrscr();
                       adminObj.viewQuestion();
                       break;
                   case 4:
                       clrscr();
                       adminObj.viewStudent();
                       break;
                   case 5:
                       clrscr();
                       adminObj.removeQuestion();
                       break;
                   case 6:
                       clrscr();
                       adminObj.removeStudent();
                       break;
                   case 7:
                       clrscr();
                       break;
                   default:
                       textcolor(LIGHTRED);
                       gotoxy(32,18);
                       cout<<"Wrong Choice. Try Again!";
                       getch();
                   }
                   if(choice==7)
                    break;

               }
           }
           }while(c==0);
       }
       else if(type==2)
       {
           Student studObj;
           do
           {
                c=studObj.input();
                if(c==0)
                {
                   gotoxy(30,14);
                   textcolor(LIGHTRED);
                   cout<<"Login Cancelled";
                   gotoxy(1,20);
                   textcolor(WHITE);
                   cout<<"Press any key to continue";
                   getch();
                   break;
                }
           c=studObj.checkUserExists("student");
           if(c==1)
           {
               gotoxy(28,20);
               textcolor(LIGHTGREEN);
               cout<<"Login Accepted!";
               gotoxy(28,20);
               cout<<"Welcome "<<studObj.getName();
               gotoxy(28,22);
               textcolor(WHITE);
               cout<<"Press any key to continue!";
               getch();
               while(1)
               {
                   clrscr();
                   textcolor(LIGHTGREEN);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(1,3);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(32,2);
                   cout<<"QUIZ APPLICATION";
                   textcolor(LIGHTGREEN);
                   gotoxy(35,6);
                   cout<<"STUDENT MENU"<<endl;
                   textcolor(YELLOW);
                   for(int i=1;i<=80;i++)
                    cout<<"*";
                   gotoxy(32,9);
                   cout<<"1. Start Quiz";
                   gotoxy(32,10);
                   cout<<"2. View Performance";
                   gotoxy(32,11);
                   cout<<"3. Exit";
                   gotoxy(32,13);
                   cout<<"Enter Choice:";
                   textcolor(WHITE);
                   cin>>choice;
                   switch(choice)
                   {
                   case 1:
                       clrscr();
                       studObj.quiz();
                       break;
                   case 2:
                       clrscr();
                       studObj.viewPerformance();
                       break;
                   case 3:
                       clrscr();
                       break;
                   default:
                       textcolor(LIGHTRED);
                       gotoxy(32,18);
                       cout<<"Wrong Choice. Try Again!";
                       getch();
                   }
                   if(choice==3)
                    break;

               }
           }
           }while(c==0);
       }
       else
       {
           gotoxy(30,14);
           cout<<"\t\t\t\t\t\t\t\t\t";
           gotoxy(30,14);
           textcolor(LIGHTRED);
           cout<<"Invalid User Type";
           getch();
       }

   }while(type!=1||type!=2);
   return 0;
}
