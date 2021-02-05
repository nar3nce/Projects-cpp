OPERATORS (java)



package ga;

public class GA {

public static void main(String[] args) {

float x = 8, y = 5, r = 0;

r = x + y ;
System.out.println("the sum of " + x + " and " + y + " is " + r );

r = x - y ;
System.out.println("the difference of " + x + " and " + y + " is " + r );

r = x * y ;
System.out.println("the product of " + x + " and " + y + " is " + r );

r = x / y ;
System.out.println("the quotient of " + x + " and " + y + " is " + r );

r = x % y ;
System.out.println("the remainder of " + x + " and " + y + " is " + r );



System.out.println("");
System.out.println("***** Using The Shortcut Operators *****");
System.out.println("");


x += y;
System.out.println("the sum is " + x );

x -= y;
System.out.println("the difference is " + x );

x *= y;
System.out.println("the product is " + x );

x /= y;
System.out.println("the quotient is " + x );

x %= y;
System.out.println("the remainder is " + x );
}

}

Size Of  (c++)

#include <iostream.h>
#include <conio.h>

 
int main() { clrscr();

int C;

cout<<" Enter Choice ";
cin >>C;

if ( C == 1 )
{
	cout << "Size of char : " << sizeof(char) << endl;
}

else if ( C == 2 )
{
	 cout << "Size of short int : " << sizeof(short int) << endl;
}

else if ( C == 3 )
{
	 cout << "Size of int : " << sizeof(int) << endl;
}

else if ( C == 4 )
{
	cout << "Size of long int : " << sizeof(long int) << endl;
}

else if ( C == 5 )
{
	 cout << "Size of float : " << sizeof(float) << endl;
}

else if ( C == 6 )
{
	 cout << "Size of double : " << sizeof(double) << endl;
}

else
{
 cout<<"Eroor";
}
   
   getch();
   return 0;
}
Logigal and relational (java)



/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gb;

/**
 *
 * @author students
 */
public class Gb {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
      
     System.out.println("Logical"); 
      boolean a = true;
      boolean b = false;

      System.out.println("a && b = " + (a&&b));
      System.out.println("a || b = " + (a||b) );
      System.out.println("!(a && b) = " + !(a && b)); 
      
      
      
      int x = 10;
      int y = 20;
 
      System.out.println((x == y)); 
      System.out.println("relational"); 
      System.out.println("a == b = " + (x == y) );
      System.out.println("a != b = " + (x != y) );
      System.out.println("a > b = " + (x > y) );
      System.out.println("a < b = " + (x < y) );
      System.out.println("b >= a = " + (x >= y) );
      System.out.println("b <= a = " + (x <= y) );
    }
    
}




String functions  (java)

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package na;
import java.util.Scanner;
/**
 *
 * @author students
 */
public class Na {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       Scanner sc = new Scanner(System.in);
        
        
        System.out.println("Enter your Name : ");
        
        String name = sc.nextLine();
        System.out.println("Your Name is : " + name);
        System.out.println("String length is : " + name.length());
        
       
        String sr1 = "Computer";
        String sr2 = "Science";
        String sr3 = "Computer";
        
        System.out.println("compare str1 and str 2 : " + sr1.compareTo(sr3));
        
        String strlwr = sr1.toLowerCase();
        System.out.println(strlwr);
        
        
        String strupr = sr1.toUpperCase();
        System.out.println(strupr);
        
        String strep = sr2.replace('e','a');
        System.out.println(strep);
    }
    
}



arrays  (java)









package na5;
import java.util.Scanner;

public class Na5 {

    
    public static void main(String[] args) {
        
    Scanner sc = new Scanner(System.in);
    int[][] g = new int[5][5];  int avg = 0; int total = 0;
    for(int i = 0; i < 5; i++)
    {
         total = 0;
         for(int j = 0; j < 4; j++)
         {
            g[i][j] = sc.nextInt();
            total += g[i][j];
         }  
          avg = total / 4;
          System.out.println("total average is : " + avg);
      
          
    }
   }   
}