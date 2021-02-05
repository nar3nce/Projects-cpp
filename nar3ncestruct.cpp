// n1

#include<iostream.h>
#include<conio.h>
const int max = 4;
int main()
{

char *names[max] =
{
"a",
"b",
"c",
"d",
};

for (int i = 0; i < max; i++)
{
  cout<<"value of names ["<<i<<"] = " ;
  cout<<names[i]<<endl;

}


getch();
clrscr();
return 0;
}


// n2

#include<iostream.h>
#include<conio.h>
const int max = 3;
int i = 0;
int main()
{

int var[max] = { 10, 100, 200};
int ptr[max];

for (i = 0; i < max; i++)
{
ptr[i] = var[i];

}

for (i = 0; i < max; i++)
{
cout<<"value of var ["<<i<<"] = " ;
cout<<ptr[i]<<endl;
}



getch();
clrscr();
return 0;
}



// n3

#include<iostream.h>
#include<conio.h>

int main()
{

int array[3];
int x = 10, y = 20, z = 30;
int i = 0;


array[0] = x;
array[1] = y;
array[2] = z;

for (i = 0; i < 3; i++)
{
cout<<"value of var ["<<i<<"] = ";
cout<<array[i]<<endl;
}

getch();
clrscr();
return 0;
}


//n4

#include<iostream.h>
#include<conio.h>

struct bookinfo
{
char bkname[30];
char authorp[30];
int pages;
float price;

}book[5];


int main()
{
int i = 0;

for (i = 0; i < 3; i++)
{
cout << "enter the book name of the book : ";
cin>>book[i].bkname;

cout << "enter the number of pages : ";
cin>>book[i].pages;

cout << "enter the price of the book : ";
cin>>book[i].price;
}

cout << "****** Book Details ********"<<endl;
for (i = 0; i < 3; i++)
{
cout << "name of book : ";
cout<<book[i].bkname<<endl;

cout << "name of pages : ";
cout<<book[i].pages<<endl;

cout << "price  : ";
cout<<book[i].price<<endl;

}

getch();
clrscr();
return 0;
}


// n5


#include<iostream.h>
#include<conio.h>

struct students
{
char name[30];
char course[30];
char studentid[30];
char age[30];


}nar3nce[5];


int main()
{
int i = 0;

for (i = 0; i < 3; i++)
{
cout << "enter student name for student " << i << " : " ;
cin>>nar3nce[i].name;

cout << "enter student course for student " << i  << " : " ;
cin>>nar3nce[i].course;

cout << "enter student id for student " << i << " : " ;
cin>>nar3nce[i].studentid;

cout << "enter student age for student " << i << " : " ;
cin>>nar3nce[i].age;

}

cout << "****** Student  Details ********"<<endl;
for (i = 0; i < 3; i++)
{

cout << "name of student  " << i << " is : ";
cout <<nar3nce[i].name<<endl;

cout << "course of student  " << i << " is : ";
cout <<nar3nce[i].course<<endl;

cout << "student id of student  " << i << " is : ";
cout <<nar3nce[i].studentid<<endl;

cout << "age of student " << i << " is : ";
cout <<nar3nce[i].age<<endl;

}

getch();
clrscr();
return 0;
}