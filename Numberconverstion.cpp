#include<iostream.h>
#include<conio.h>
#include<math.h>

int DecimalFunc(long D);
int OctalFunc(long O);

void main()
{
clrscr();
long nars;

cout<<"Binary Value: ";
cin>>nars;

cout<<"\nDecimal Value : " <<DecimalFunc(nars)<<"\n";
cout<<"Octal Value : "<<OctalFunc(nars)<<"\n";

long dec = DecimalFunc(nars);
int hex[1000];
int i=0, j=0;

while(dec != 0){
 hex[i] = dec % 16;
 dec /= 16;
 i++;
}

cout<<"hex Value : ";

 for(j=i-1;j>=0;j--) {
	 
  if(hex[j] > 9){
     cout<<(char)(hex[j] + 55);
 	}
	
  else {
	cout<<hex[j];
	   }
 }

 getch();
}

int OctalFunc(long binary)
{
	int octal=0, decimal=0, i=0, rem;

	while(binary !=0){
		rem= binary % 10;
		int res = rem * pow(2,i);
		decimal += res;
		i++;
		binary /= 10;
	  }
	i=1;
	
	while(decimal!=0) {
		rem=decimal%8;
		octal+=rem*i;
		decimal /= 8;
		i *= 10;
	  }
	return octal;
}

int DecimalFunc(long bin)
{
    int DecNum=0, num=bin, base=1;
	int temp=num;
	while(temp) {
		int LastDigit = temp % 10;
		temp /= 10;
		DecNum += LastDigit * base;
		base *=2;
	}
	
	
	return DecNum;
}