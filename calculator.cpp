# LBYEC72-Project
Calculator
#include <iostream>
#include <stdlib.h>
#include <math.h>
 
using namespace std;

void factorial()
{
     double c, n, fact = 1;
     cout<<"Factorial\n\n";
     cout<<"Enter a number: ";
     cin>>n;
     for (c = 1; c <= n; c++)
         fact = fact * c;
     cout<<"Factorial of "<<n<<" = "<<fact<<"\n";
}
void arithmetic()
{
     int op;
     float num1,num2,result;
     cout<<"Arithmetic Operations\n\n";
     cout<<"Choose operation:\n[1]Addition\n[2]Subtraction\n[3]Multiplication\n[4]Division\n";
     cin>>op;
     switch (op)
     {
      case 1:
       cout<<"\nPlease enter first no.: ";
       cin>>num1;
       cout<<"\nPlease enter second no.: ";
       cin>>num2;
       result=num1+num2; 
       cout<<"\nSum is "<<result<<"\n"; break;
      case 2:
       cout<<"\nPlease enter first no.: ";
       cin>>num1;
       cout<<"\nPlease enter second no.: ";
       cin>>num2;
       result=num1-num2; 
       cout<<"\nDifference is "<<result<<"\n"; break;
      case 3:
       cout<<"\nPlease enter first no.: ";
       cin>>num1;
       cout<<"\nPlease enter second no.: ";
       cin>>num2;
       result=num1*num2; 
       cout<<"\nProduct is "<<result<<"\n"; break;
      case 4:
       cout<<"\nPlease enter first no.: ";
       cin>>num1;
       cout<<"\nPlease enter second no.: ";
       cin>>num2;
       result=num1/num2;
       cout<<"\nQuotient is "<<result<<"\n"; break;
      default:
       cout<<"Try again\n"; system("pause"); return arithmetic();
     }
}
void average()
{
     int a, n;
     float num, sum=0;
     cout<<"Average\n\n";
     cout<<"Enter number of items: ";
     cin>>n;
     for(a=1;a<=n;a++)
     {
        cout<<"#"<<a<<" : ";
        cin>>num;
        sum+=num;
     }
     cout<<"The average of "<<n<<" numbers is "<<sum/n<<"\n";
     
}
void GCF()
{
     int a, b, x, y, t, gcf;
     cout<<"Greatest Common Factor\n\n";
     cout<<"Enter first integer: ";
     cin>>x;
     cout<<"Enter second integer: ";
     cin>>y;
     a = x;
     b = y;
     while (b != 0)
     {
        t = b;
        b = a % b;
        a = t;
     }
     gcf = a;
     cout<<"\nGreatest common divisor of "<<x<<" and "<<y<<" = "<<gcf<<"\n";
}

void LCM()
{
     int a, b, x, y, t, lcm;
     cout<<"Least Common Multiple\n\n";
     cout<<"Enter first integer: ";
     cin>>x;
     cout<<"Enter second integer: ";
     cin>>y;
     a = x;
     b = y;
     while (b != 0)
     {
        t = b;
        b = a % b;
        a = t;
     }
     lcm = (x*y)/a;
     cout<<"\nLeast common multiple of "<<x<<" and "<<y<<" = "<<lcm<<"\n";
}

void fraction_reduction()
{
  int choice, top_part, bottom_part, smallest;
  cout<<"Fraction Reduction\n\n";
  cout<<"Enter top part of fraction:";
  cin>>top_part;
  cout<<"Enter bottom part of fraction:";
  cin>>bottom_part;
  if (top_part>bottom_part)
  {
      smallest=bottom_part;
  }
  if (top_part<bottom_part)
  {
      smallest=top_part;
  }
          double it,its,newtop,newbot;
          for (int a=1; a<=smallest; a++)
          {
               
              it=top_part%a;
              its=bottom_part%a;
                      if (it==0)
                      {
                          if (its==0)
                          {
                              newtop=top_part/a;
                              newbot=bottom_part/a;
                          }
                      }
          }
          cout<<"\nNew fraction:";
          cout<<newtop<<"/"<<newbot<<"\n\n";
     
}



int main()
{
    int choice;
    cout<<"Choose option:\n";
    cout<<"[1]Arithmetic\n";
    cout<<"[2]Average\n";
    cout<<"[3]Factorial\n";
    cout<<"[4]Greatest Common Factor\n";
    cout<<"[5]Least Common Multiple\n";
    cout<<"[6]Fraction Reduction\n";
    
    cout<<"[99]Quit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
      arithmetic(); return main(); break;
    case 2:
      average(); return main(); break;
    case 3:
      factorial(); return main(); break;
    case 4:
      GCF(); return main(); break;
    case 5:
      LCM(); return main(); break;
    case 6:
      fraction_reduction(); return main(); break;
        
    case 99:
      return EXIT_SUCCESS;
        default:
             cout<<"Try again\n"; return main();
    }
    return 0;
}                          
    
    
                                       
