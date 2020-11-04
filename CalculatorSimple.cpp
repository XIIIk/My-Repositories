#include<iostream>
#include<conio.h>
#include<stdlib.h>

  char op;
using namespace std;

void sum()
   {
     
    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout << "Enter number " << i << ":\n\n" ;
        cin >> n; 
        sum += n;
    }
    cout << "sum is: " << sum <<endl <<endl;
    
    }
void diff()
    {
     int diff;
     int n1, n2;
     cout<<"Enter two numbers to find their difference: \n\n";
     cout<<"Enter first number: ";
     cin >> n1;
     cout<<"\nEnter second number: ";
     cin >> n2;
     diff = n1 - n2;
     cout<<"\nDifference is: " << diff << endl << endl;
     }
     
void pro()
    
    {
     int pro = 1;
     int n;
     int numberitems;
     cout << "Enter number of items: \n";
     cin >> numberitems;
     for(int i=0;i<=numberitems;i++)
     {
             cout<<"\nEnter item "<<i<<":";
             cin>>n;
             pro*=n;
     }
             
     cout<<"Product is: "<<pro<<endl<<endl;    
     }
       
 void div()
     {
      int div;
      int n1;
      int n2;
      cout<<"Enter 2 numbers to find their quotient\n\n";
      cout<<"Enter numerator: ";
      cin>>n1;
      cout<<"\nEnter denominator: ";
      cin>>n2;
      div=n1/n2;
      cout<<"\nQuotient is: " << div << endl << endl;
      }      
   

int main()
{   
    
    
    system("cls");
    do
    {
                
    system("pause");              
    system("cls");    
    cout<<"***which operation you want to perform***\n";
    cout<<"Press 0 to Exit\n";
    cout<<"Press 1 for Addition \n";
    cout<<"Press 2 for Subtraction\n";
    cout<<"Press 3 for Multiplication\n";
    cout<<"Press 4 for Division\n";

    cout<<"Press option: ";
    cin>>op;
    switch(op)
    {
              case '1':
              sum();
              
              break;
              case '2':
              diff();
              break;
              case '3':
              pro();
              break;
              case '4':
              div();
              break;    
              case '0':
              exit(0);    
              default:
              cout<<"invalid input"  ;
              system("cls");
    } 
    }
                                                                         
    while(op!='0');
                    
                    getch();
                    }
