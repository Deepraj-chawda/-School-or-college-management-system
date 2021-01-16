#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
int g,cm,sc,st;
struct stud
{   char name[100];
    int id,cl;
}s1,s2;
void login()
{  int ch=3;
 lo : clrscr();
  int j=0,c=0;
  g=0;
char n[100] ,p[5],n1[]="deepraj techno";
char p1[]={'1','2','3','4','5'};
cout<<"\n\t\t\tLOGIN HERE \n";
cout<<"\t\tenter username : ";
gets(n);
cout<<"\t\tenter password : ";
for(int i=0;i<5;i++)
{
p[i]=getch();
cout<<"*";
}
cout<<"\n\t\t\tLOGIN";
cout<<"\n\n\tpress any key to login\n";
getch();
for(i=0;i<5;i++)
{
if(p1[i]==p[j])
{   c++;
  }
j++;
}
if(strcmp(n1,n)==0&&c==5){
 g=1;
cout<<"\n\t\t\t Welocome to DEEPRAJ TECHNO\n";
    }
else{
cout<<"\n\t\tincorrect username and password ";
cout<<"\n\n\t\tTry Again ("<<--ch<<" more chances & press any key )\n";
  getch();
if(ch>0)
{ goto lo;
}
else{
cout<<"\n\t\tSorry";
exit; }
}
}
void menu()
{    cm=0;
 clrscr();
cout<<"\n\t\t\t Welocome to DEEPRAJ TECHNO\n";
cout<<"\n\t\t\t Welocome to ABC School\n";
cout<<"\n\t\t\t\tM E N U\n";
cout<<"\t1. Student Managment\n";
cout<<"\t2. Staff Management\n";
cout<<"\t3. Show Record or Data\n";
cout<<"\t4. Logout\n";
cout<<"\t5. Exit\n";
cout<<"\n\tEnter your choose : ";
cin>>cm;

}
void stud()
{   clrscr();
  sc=0;
  cout<<"\n\t\t\tSTUDENT MANAGEMENT";
  cout<<"\n\t1. Add new Student";
  cout<<"\n\t2. Edit a Student";
  cout<<"\n\t3. Delete a Student";
  cout<<"\n\t4. Back";
  cout<<"\n\t5. Logout";
  cout<<"\n\t6. Exit";
  cout<<"\n\tEnter Your chose : ";
  cin>>sc;
}
void staff()
{   clrscr();
  st=0;
  cout<<"\n\t\t\tSTAFF MANAGEMENT";
  cout<<"\n\t1. Add new Staff or Teacher";
  cout<<"\n\t2. Edit a Staff or Teacher";
  cout<<"\n\t3. Delete a Staff or Teacher";
  cout<<"\n\t4. Back";
  cout<<"\n\t5. Logout";
  cout<<"\n\t6. Exit";
  cout<<"\n\tEnter Your chose : ";
  cin>>st;
}
void adds()
{
   int no;
fstream files;
files.open("students.txt",ios::app);
if(!files)
{ cout<<"File is not created";}
else
{ cout<<"\n\tHow many student you want to added : ";
cin>>no;
for(int i=1;i<=no;i++)
{      clrscr();
 cout<<"\n\tEnter Student ID : ";
   cin>>s1.id;
   cout<<"\n\tEnter Student Name : ";
   gets(s1.name);
   cout<<"\n\tEnter Student Class : ";
   cin>>s1.cl;
   files<<endl;
   files<<s1.id<<endl;
   files<<s1.name<<endl;
   files<<s1.cl<<endl;
   files<<endl;
   }
   files.close();
 }
 cout<<"\n\t\tStudents Added";

}
void edits()
{    int id1,nid,ncl;
char nname[50];
fstream filew;
fstream filer;
  filer.open("students.txt",ios::in);
filew.open("new.txt",ios::app);

if(!filer)
{
cout<<"file is not found";
}
else
{  cout <<"Enter the Student ID of which you want to edit: ";
 cin>>id1;
  filer>>s1.id;
filer>>s1.name;
filer>>s1.cl;

 while(!filer.eof())
 {
  if(id1!=s1.id)
 {   filew<<endl;
   filew<<s1.id<<endl;
   filew<<s1.name<<endl;
   filew<<s1.cl<<endl;
   filew<<endl;
   }
    else{
   cout<<"\n\tEnter Student new ID : ";
   cin>>nid;
   cout<<"\n\tEnter Student Name : ";
   gets(nname);
   cout<<"\n\tEnter Student Class : ";
   cin>>ncl;
   filew<<endl;
   filew<<nid<<endl;
   filew<<nname<<endl;
   filew<<ncl<<endl;
   filew<<endl;
   }
   filer>>s1.id;
filer>>s1.name;
filer>>s1.cl;
     }
     }
     filer.close();
      filew.close();
     remove("students.txt");
     rename("new.txt","students.txt");
cout<<"\n\t\tRecord Updated";
}
void dels()
{     int id2;
fstream fw;
fstream fr;
  fr.open("students.txt",ios::in);
fw.open("new.txt",ios::app);

if(!fr)
{
cout<<"file is not found";
}
else
{  cout <<"Enter the Student ID of which you want to Delete Data : ";
 cin>>id2;
  fr>>s1.id;
fr>>s1.name;
fr>>s1.cl;

 while(!fr.eof())
 {
  if(id2!=s1.id)
 {   fw<<endl;
   fw<<s1.id<<endl;
   fw<<s1.name<<endl;
   fw<<s1.cl<<endl;
   fw<<endl;
   }
    else{
   cout<<"\n\t Student Record Deleted ";
   }
   fr>>s1.id;
fr>>s1.name;
fr>>s1.cl;
     }
     }
     fr.close();
      fw.close();
     remove("students.txt");
     rename("new.txt","students.txt");

}
void addt()
{    int nt;
fstream ft;
ft.open("staff.txt",ios::app);
if(!ft)
{ cout<<"File is not created";}
else
{ cout<<"\n\tHow many Teachers or staff you want to added : ";
cin>>nt;
for(int i=1;i<=nt;i++)
{      clrscr();
 cout<<"\n\tEnter Staff or Teacher ID : ";
   cin>>s2.id;
   cout<<"\n\tEnter Staff or Teacher Name : ";
   gets(s2.name);
   cout<<"\n\tEnter Staff or Teacher Age : ";
   cin>>s2.cl;
   ft<<endl;
   ft<<s2.id<<endl;
   ft<<s2.name<<endl;
   ft<<s2.cl<<endl;
   ft<<endl;
   }
   ft.close();
 }
 cout<<"\n\t\tStaff or Teacher Added";
}
void editt()
{ int idt1,tid,tcl;
char tname[50];
fstream ftw;
fstream ftr;
  ftr.open("staff.txt",ios::in);
ftw.open("new.txt",ios::app);

if(!ftr)
{
cout<<"file is not found";
}
else
{  cout <<"Enter the Staff or Teacher ID of which you want to edit: ";
 cin>>idt1;
  ftr>>s2.id;
ftr>>s2.name;
ftr>>s2.cl;

 while(!ftr.eof())
 {
  if(idt1!=s2.id)
 {   ftw<<endl;
   ftw<<s2.id<<endl;
   ftw<<s2.name<<endl;
   ftw<<s2.cl<<endl;
   ftw<<endl;
   }
    else{
   cout<<"\n\tEnter Staff or Teacher new ID : ";
   cin>>tid;
   cout<<"\n\tEnter Staff or Teacher Name : ";
   gets(tname);
   cout<<"\n\tEnter Staff or Teacher Age : ";
   cin>>tcl;
   ftw<<endl;
   ftw<<tid<<endl;
   ftw<<tname<<endl;
   ftw<<tcl<<endl;
   ftw<<endl;
   }
   ftr>>s2.id;
ftr>>s2.name;
ftr>>s2.cl;
     }
     }
     ftr.close();
      ftw.close();
     remove("staff.txt");
     rename("new.txt","staff.txt");
     cout<<"\n\t\tStaff Record Updated";

}
void delt()
{     int idt2;
fstream tw;
fstream tr;
  tr.open("staff.txt",ios::in);
tw.open("new.txt",ios::app);

if(!tr)
{
cout<<"file is not found";
}
else
{  cout <<"Enter the Staff or Teacher ID of which you want to Delete Data : ";
 cin>>idt2;
  tr>>s2.id;
tr>>s2.name;
tr>>s2.cl;

 while(!tr.eof())
 {
  if(idt2!=s2.id)
 {   tw<<endl;
   tw<<s2.id<<endl;
   tw<<s2.name<<endl;
   tw<<s2.cl<<endl;
   tw<<endl;
   }
    else{
   cout<<"\n\t Staff or Teacher Record Deleted ";
   }
   tr>>s2.id;
tr>>s2.name;
tr>>s2.cl;
     }
     }
     tr.close();
      tw.close();
     remove("staff.txt");
     rename("new.txt","staff.txt");

}
void reads()
{
 clrscr();
  fstream f2;
  f2.open("students.txt",ios::in);

 if(!f2)
 {cout<<"file is not found";}
 else{
 f2>>s1.id;
f2>>s1.name;
f2>>s1.cl;

 while(!f2.eof())
 {

  cout<<"\n\t\tStudent ID : "<<s1.id;
  cout<<"\n\t\tStudent Name : "<<s1.name;
  cout<<"\n\t\tStudent Class : "<<s1.cl;
  cout<<"\n-------------------------------------------------------------"<<endl;
     delay(1000);
  f2>>s1.id;
f2>>s1.name;
f2>>s1.cl;
 }
}
 f2.close();
 }
 void readt()
{
 clrscr();
  fstream f1;
  f1.open("staff.txt",ios::in);

 if(!f1)
 {cout<<"file is not found";}
 else{
 f1>>s2.id;
f1>>s2.name;
f1>>s2.cl;

 while(!f1.eof())
 {

  cout<<"\n\t\tStaff or Teacher ID : "<<s2.id;
  cout<<"\n\t\tStaff or Teacher Name : "<<s2.name;
  cout<<"\n\t\tStaff or Teacher Age : "<<s2.cl;
  cout<<"\n-------------------------------------------------------------"<<endl;
   delay(1000);
  f1>>s2.id;
f1>>s2.name;
f1>>s2.cl;
 }
}
 f1.close();
 }
void main()
{     int a,e,d,at,dt,et,rr,r;
clrscr();
login();
if(g==1)
{
 m : menu();
  switch(cm)
{ case 1:
 ad: stud();

switch(sc)
  {
   case 1:
   adds();
   cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>a;
   switch(a)
   { case 1:
       goto ad;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 2:
   edits();
     cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>e;
   switch(e)
   { case 1:
       goto ad;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 3:
   dels();
     cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>d;
   switch(d)
   { case 1:
       goto ad;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 4:
   goto m;
   break ;

   case 5:
   main();
   break;

   case 6:
   exit;
   break;
    default :
    cout<<"Invalid Choose";
    exit;
    break;
}
  break;

  case 2:
st :  staff();

switch(st)
  {
   case 1:
   addt();
     cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>at;
   switch(at)
   { case 1:
       goto st;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 2:
   editt();
      cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>et;
   switch(et)
   { case 1:
       goto st;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 3:
   delt();
    cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>dt;
   switch(dt)
   { case 1:
       goto st;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
   break;

   case 4:
   goto m;
   break;

   case 5:
   main();
   break;

   case 6:
   exit;
   break;
    default :
    cout<<"Invalid Choose";
    exit;
    break;

}
  break;

  case 3:
  clrscr();
  cout<<"\n\twhich File you want to read ";
 cout<<"\n\t1.Student Management File ";
 cout<<"\n\t2.Staff or Teacher Management File";
 cout<<"\n\n\tEnter your choose : ";
 cin>>r;
 switch(r)
 {case 1:
   reads();
 break;
 case 2 :
 readt();
 break;
 default :
 cout<<"\n\t\tInvaild choose ";
 break;
 }
   cout<<"\n\t1.Back \n\t2. Exit\n";
   cout<<"\n\tEnter your choose : ";
   cin>>rr;
   switch(rr)
   { case 1:
       goto m;
	 break;
   case 2:
   exit;
   break;
   default :
   cout<<"\n\tInVaild choose";
   break;
   }
  break;

  case 4:
 main();
  break;

  case 5:
  exit;
  break;

  default :
  cout<<"\tInvaild Choose\n";
  getch();
  exit;
  break;
}
 }
 else{
cout<<"\n\t\tSorry";
  }

getch();
}