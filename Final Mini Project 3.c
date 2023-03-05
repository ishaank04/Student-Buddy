//Libraries Used
#include<stdio.h>
#include<math.h>

//Function Declaration
int taxes()
{
//Function Definition

//Structure Declaration
    struct New{
    int Salary;
    int Taxes;
    int Income_Property;
    int Income_Business;
    int Income_Shares;
    int Other_Sources;
    int system;
    int Total_Income;
    int Taxed_Income;
    int Total_Tax;
    }
    //Structure Variable
    a;

    //Declaring Variables
    int system, Total_Taxable_Income,Deductions_Salary,Deductions_Property,long_term,short_term, taxable_long_term,taxable_short_term, total_Income, Internal_Deductions;
    int mediclaim, Deduction_Mediclaim, parent, mediclaim_parent, Deduction_Mediclaim_Parent, ppf, spf, hlp, funds, Deduction_Funds, nps, Deduction_nps,Deduction_Gov;
    int NGov, Deductions_NGov, Sav, Deduction_Sav, External_Deductions,  Deductions, total_Taxable_Income;


    printf("====================================Welcome to Taxes Application====================================\n");


    do{
    //Printing Option List
    printf("\n Enter 1 to Use New Taxation System\n Enter 2 to Use Old Taxation System System\n Enter 0 to Exit Application\n ");
    //User Choice
    scanf("%d",&system);

    if(system==0)
    break;

    //New Taxation System
    if(system==1)
    {
    // Inputing Various Incomes
     printf("Calculating Taxes in the New System:\n");
     printf("Enter Your Salary: ");
     scanf("%d",&a.Salary);
     printf("Enter Income by Properties and Rentals: ");
     scanf("%d",&a.Income_Property);
     printf("Enter Income from Businesses: ");
     scanf("%d",&a.Income_Business);
     printf("Enter Income from Selling Shares and Capital Gains: ");
     scanf("%d",&a.Income_Shares);
     printf("Enter Income from Other Sources: ");
     scanf("%d",&a.Other_Sources);

     a.Total_Income= (a.Salary + a.Income_Property + a.Income_Business + a.Income_Shares + a.Other_Sources);

     printf("Your Total Taxable Income is %d\n",a.Total_Income);

     //Checking the Tax Slab in which the Total Taxable Income Falls
     if(a.Total_Income<=250000)
     {
     a.Total_Tax=0;
     }

     else if(a.Total_Income<=500000 && a.Total_Income>250000)
     {
     a.Taxed_Income= (a.Total_Income-250000);
     a.Taxes= (a.Taxed_Income*0.05);
     a.Total_Tax= (a.Taxes+0);
     }

     else if (a.Total_Income<=750000 && a.Total_Income>500000)
     {
     a.Taxed_Income= (a.Total_Income-500000);
     a.Taxes= (a.Taxed_Income*0.1);
     a.Total_Tax= (a.Taxes+ 12500 );
     }

     else if(a.Total_Income<=1000000 && a.Total_Income>750000)
     {
     a.Taxed_Income= (a.Total_Income-750000);
     a.Taxes= (a.Taxed_Income*0.15);
     a.Total_Tax= (a.Taxes+ 37500 );
     }

     else if(a.Total_Income<=1250000 && a.Total_Income>1000000)
     {
     a.Taxed_Income= (a.Total_Income-1000000);
     a.Taxes= (a.Taxed_Income*0.2);
     a.Total_Tax= (a.Taxes+ 75000 );
     }

     else if (a.Total_Income<=1500000 && a.Total_Income>1250000)
     {
     a.Taxed_Income= (a.Total_Income-1250000);
     a.Taxes= (a.Taxed_Income*0.25);
     a.Total_Tax= (a.Taxes+ 125000 );
     }

     else if(a.Total_Income>1500000)
     {
     a.Taxed_Income= (a.Total_Income-1500000);
     a.Taxes= (a.Taxed_Income*0.30);
     a.Total_Tax= (a.Taxes+ 187500);
     }

     printf("Your Total Income Tax is: %d\n",a.Total_Tax);
     }

     //Old Taxation System
    if(system==2)
    {
     // Inputting Various Variable and Calculating the Taxable Income by Removing Certain Internal Deductions
     printf("Calculating Taxes in the Old System:\n");

     printf("Enter Your Salary: ");
     scanf("%d",&a.Salary);
     if(a.Salary>=52500)
     {
     Deductions_Salary = 52500;
     }
     else
     {
     Deductions_Salary = a.Salary;
     }


     printf("Enter Income by Properties and Rentals: ");
     scanf("%d",&a.Income_Property);
     Deductions_Property= (a.Income_Property*0.30);


     printf("Enter Income (Profit) from Businesses: ");
     scanf("%d",&a.Income_Business);

     printf("Enter Income from Long Term Shares: ");
     scanf("%d",&long_term);
     taxable_long_term= (long_term*0.2);

     printf("Enter Income from Short Term Shares: ");
     scanf("%d",&short_term);
     taxable_short_term= (short_term*0.15);


     printf("Enter Income from Other Sources: ");
     scanf("%d",&a.Other_Sources);


     total_Income= (a.Salary+ a.Income_Property+ a.Income_Business+ a.Other_Sources+ taxable_long_term+ taxable_short_term);
     Internal_Deductions= (Deductions_Salary + Deductions_Property);

     //Calculating External Deductions
     printf("External Deductions:\n ");
     printf("Enter Mediclaim Cost: ");
     scanf("%d",&mediclaim);
     if (mediclaim>25000)
     {
    Deduction_Mediclaim=25000;
     }
     else
    {
     Deduction_Mediclaim=mediclaim;
    }
     printf("Enter 1 if Parents are above 60. Enter 2 if Parents are below 60.\n");
     scanf("%d",&parent);
     printf("Enter Mediclaim Cost For Parents: ");
     scanf("%d",&mediclaim_parent);

     if(parent==1)
     {
         if(mediclaim_parent>50000)
     {
         Deduction_Mediclaim_Parent=50000;
     }
     else
    {
     Deduction_Mediclaim_Parent= mediclaim_parent;
    }
     }

     else if(parent==2)
     {
         if(mediclaim_parent>25000)
     {
         Deduction_Mediclaim_Parent=25000;
     }
     else
    {
     Deduction_Mediclaim_Parent= mediclaim_parent;
    }
     }
     else if (parent !=1 && parent !=2)
     {
     Deduction_Mediclaim_Parent=0;
     }

    printf("Enter Money invested In Public Provident Fund: ");
    scanf("%d",&ppf);
    printf("Enter Money invested In Salary Provident Fund: ");
    scanf("%d",&spf);
    printf("Enter Housing Loan Principal: ");
    scanf("%d",&hlp);

    funds= (ppf+spf+hlp);

    if (funds>150000)
    {
     Deduction_Funds= 150000;
    }
    else
    {
    Deduction_Funds= funds;
    }

    printf("Enter Money Invested in National Pension Scheme: ");
    scanf("%d",&nps);

    if (nps>50000)
    {
     Deduction_nps= 50000;
    }
    else
    {
    Deduction_nps= nps;
    }

    printf("Enter Money Donated to Government Agencies and Relief Funds: ");
    scanf("%d",&Deduction_Gov);
    printf("Enter Money Donated to Non-Government Agencies: ");
    scanf("%d",&NGov);
    Deductions_NGov= (NGov*0.5);


    printf("Enter Interest Earned on Savings Account: ");
    scanf("%d", &Sav);

    if(Sav>10000)
    {
        Deduction_Sav=10000;
    }
    else
    {
        Deduction_Sav=Sav;
    }


     External_Deductions=(Deduction_Mediclaim + Deduction_Mediclaim + Deduction_Mediclaim_Parent + Deduction_Funds + Deduction_nps + Deduction_Gov + Deductions_NGov + Deduction_Sav);
     Deductions= (Internal_Deductions+External_Deductions);
     total_Taxable_Income= (total_Income-Deductions);

     printf("Your Total Taxable Income is %d\n",total_Taxable_Income);

     //Checking in which slab total taxable income falls
     if(total_Taxable_Income<=250000)
     {
     a.Total_Tax=0;
     }

     else if(total_Taxable_Income<=500000 && total_Taxable_Income>250000)
     {
     a.Taxed_Income= (total_Taxable_Income-250000);
     a.Taxes= (a.Taxed_Income*0.05);
     a.Total_Tax= (a.Taxes+0);
     }


     else if(total_Taxable_Income<=1000000 && total_Taxable_Income>500000)
     {
     a.Taxed_Income= (total_Taxable_Income-500000);
     a.Taxes= (a.Taxed_Income*0.20);
     a.Total_Tax= (a.Taxes+ 12500 );
     }

     else if(total_Taxable_Income>1000000)
     {
     a.Taxed_Income= (total_Taxable_Income-1500000);
     a.Taxes= (a.Taxed_Income*0.30);
     a.Total_Tax= (a.Taxes+ 112500);
     }

     //printing the output
     printf("Your Total Income Tax is: %d\n",a.Total_Tax);

     }

   //Asking User if they want to repeat
    printf("Enter 1 to Repeat. Enter 0 to Exit.");
    scanf("%d",&system);

    }
    //Loop for Repeating
    while(system!=0 && system==1);
}

//Function Declaration
int interest()
{
//Function Definition

//Declaring Variables
int system,t,j;
float p,r,a=0,i=0,x=0,prod;
printf("====================================Welcome to Interest Calculator====================================\n");

     do{
      //Option List
      printf(" Enter 1 for Simple Interest.\n Enter 2 for Compound Interest.\n Enter 0 to Exit Application.\n");
      //User Choice
      scanf("%d",&system);

      if(system!=0)
      {
       printf("Enter Principal Amount: ");
       scanf("%f",&p);
       printf("Enter the Rate of Interest: ");
       scanf("%f",&r);
       printf("Enter the Time Period of Investment in Years: ");
       scanf("%d",&t);

       //User Choice
      switch(system)
      {
      case 1:
          //Simple Interest
      i= ((p*r*t)/100);
      a= (p+i);
      printf(" The Interest Earned is %0.2f\n The Total Amount is %0.2f\n",i,a);
      break;

      case 2:
          //Compound Interest
      x=(1+(r/100));
      prod=1;
      for(j=1;j<=t;j++)
      {
       prod= prod*x;
      }
      a= (p*prod);
      i= (a-p);
      printf(" The Interest Earned is %0.2f\n The Total Amount is %0.2f\n",i,a);
      break;

      }
     //Asking if user Wants to Repeat
     printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
     scanf("%d",&system);
      }

     }
     //Loop for Repeating
     while(system!=0);
}

//Function Declaration
int goal()
{
//Function Definition

//Declaring Variables
int system,t,i;
     float p,a,r,prod;
     printf("====================================Welcome to Future Goal Setter Application====================================\n");

     do{
      // Option List
      printf(" Enter 1 for Simple Interest.\n Enter 2 for Compound Interest.\n Enter 0 to Exit Application.\n");
      //User Choice
      scanf("%d",&system);

      if (system!=0)
      {
          printf("Enter your Goal Amount: ");
          scanf("%f",&a);
          printf("Enter the Rate of Interest: ");
          scanf("%f",&r);
          printf("Enter the Time of Investment:");
          scanf("%d",&t);

          //User Choice
          switch(system)
          {
          case 1:
          // Simple Interest
          p=((100*a)/((r*t)+100));
          printf("The principal you must invest now is %0.2f.\n",p);
          break;

          case 2:
          //Compound Interest
          prod=1;
          for(i=1;i<=t;i++)
          {
              prod= prod*(1+(r/100));
          }
          p=(a/prod);
          printf("The principal you must invest now is %0.2f.\n",p);
          break;

          default:
          printf("Wrong Input\n");
          }

        //Asking User if they want to repeat
      printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
      scanf("%d",&system);
      }

      }
      //Loop for Repeating
      while(system!=0);
}

//Function Declaration
int basic()
{
//Function Definition

//Declaring Variables
 int system,x,y,ans,rem;

     printf("====================================Welcome to Basic Calculator====================================\n");
     do{

    //Option List
     printf(" Enter 1 for Addition.\n Enter 2 for Subtraction.\n Enter 3 for Multiplication.\n Enter 4 for Division.\n Enter 0 to Exit Application.\n");
     scanf("%d",&system);

     if(system!=0)
     {
     printf("Enter First Number: ");
     scanf("%d",&x);
     printf("Enter Second Number: ");
     scanf("%d",&y);

     switch(system)
     {
    //Addition
      case 1:
      ans= (x+y);
      printf("The Sum of %d and %d is %d.\n",x,y,ans);
      break;

      case 2:
    //Subtraction
      ans= (x-y);
      printf("The Difference of %d and %d is %d.\n",x,y,ans);
      break;

      case 3:
    //Multiplication
      ans= (x*y);
      printf("The Product of %d and %d is %d.\n",x,y,ans);
      break;

      case 4:
    //Division
      ans= (x/y);
      rem=(x%y);
      printf("The Quotient of %d and %d is %d.\n",x,y,ans);
      printf("The Remainder of %d and %d is %d.\n",x,y,rem);
      break;

      default:
      printf("Wrong Input\n");

     }
     //Asking for Repitition
     printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
     scanf("%d",&system);
     }


     }
     //Loop For Repitition
     while(system!=0);

}

//Function Declaration
int advanced()
{
//Function Definition
int system, x, num, m;
     printf("====================================Welcome to Advanced Calculator====================================\n");

     //Option List
     do{
     printf(" Enter 1 to Calculate Factorial.\n Enter 2 to Calculate Average.\n Enter 3 to Calculate Exponent.\n Enter 4 to Calculate Square Root.\n");
     printf(" Enter 5 to Check if Number is Prime Number.\n Enter 6 to Check Divisibilty .\n Enter 7 to Check if Number is Armstrong Number.\n");
     printf(" Enter 8 to Print Fibonacci Series.\n Enter 9 to Print Multiplication Table.\n Enter 10 to Print Multiplication Table of Given Number.\n");
     printf(" Enter 11 to Calculate Distance between 2 points.\n Enter 12 to Calculate Midpoint between 2 points. \n Enter 0 to Exit Application.\n");

     //User Choice
     scanf("%d",&system);


     if(system!=0)
     {
        switch(system)
        {
      case 1:
          //Function Calling
      factorial();
      break;

      case 2:
          //Function Calling
      average();
      break;

      case 3:
          //Function Calling
      exponent();
      break;

      case 4:
          //Function Calling
      root();
      break;

      case 5:
          //Function Calling
      prime();
      break;

      case 6:
          //Function Calling
      checks();
      break;

      case 7:
      printf("Enter the Number of Digits: ");
      scanf("%d",&x);

      printf("Enter the Number: ");
      scanf("%d",&num);

          //Function Calling
      m= armstrong(x,num);
      if(m==num)
      {
       printf("It is an Armstrong Number.\n");
      }
      else
      printf("It is not an Armstrong Number.\n");
      break;
      case 8:
          //Function Calling
      fibo();
      break;
      case 9:
          //Function Calling
      multtab();
      break;
      case 10:
          //Function Calling
      digtab();
      break;
      case 11:
          //Function Calling
      distance();
      break;
      case 12:
          //Function Calling
      midpoint();
      break;
      default:
      printf("Wrong Input\n");

    }

     printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
     scanf("%d",&system);
     }


     }while(system!=0);
}

//Function Declaration
int volume()
{
//Function Definition

//Declaring Variables
int system,shape,l,b,h;
     float peri,area,vol,sarea,larea,s;

     printf("====================================Welcome to Volume and Area Calculator====================================\n");

    do{
    //Option List
    printf(" Enter 1 for 2 dimensional shapes.\n Enter 2 for 3 Dimensional Shapes.\n Enter 0 to Exit Application.\n");
    scanf("%d",&system);

    if(system!=0)
    {
        //2-D Shapes
        if(system==1)
        {
            //2-D Shapes List
         printf(" Enter 1 for Square.\n Enter 2 for Rectangle.\n Enter 3 for Triangle.\n Enter 4 for Circle.\n");

         //User Choice
         scanf("%d",&shape);

         switch (shape)
         {
             //Square
         case 1:
         printf("Enter the Length of the Square: ");
         scanf("%d",&l);
         printf("The Perimeter of Square is %d.\n",(4*l));
         printf("The Area of Square is %d.\n",(l*l));
         break;

         //Rectangle
         case 2:
         printf("Enter the Length of the Rectangle: ");
         scanf("%d",&l);
         printf("Enter the Breadth of the Rectangle: ");
         scanf("%d",&b);
         peri=2*(l+b);
         printf("The Perimeter of Square is %0.2f.\n",peri);
         printf("The Area of Square is %d.\n",(l*b));
         break;

         //Triangle
         case 3:
         printf("Enter the Base Length of the Triangle: ");
         scanf("%d",&l);
         printf("Enter the Height of the Triangle: ");
         scanf("%d",&b);
         area= (l*b);
         area = area/2;

         printf("The Area of the Triangle is %0.2f.\n",area);

         break;

         //Circle
         case 4:
         printf("Enter the Radius of the Circle: ");
         scanf("%d",&l);
         peri= 2*3.14*l;
         area= 3.14*(l*l);
         printf("The Circumference of Circle is %0.2f.\n",peri);
         printf("The Area of Circle is %0.2f.\n",area);
         break;

         default:
         printf("Wrong Input\n");
         }
        }

        //3-D Shapes
        else if(system==2)
        {
            //3-D List
         printf(" Enter 1 for Cube.\n Enter 2 for Cuboid.\n Enter 3 for Sphere.\n Enter 4 for Cone.\n Enter 5 for Pyramid.\n");

         //User Choice
         scanf("%d",&shape);

         switch (shape)
         {
      // Cube
      case 1:
      printf("Enter Length of Cube: ");
      scanf("%d",&l);
      printf("The Volume of the Cube is %d.\n",(l*l*l));
      printf("The Total Surface Area of Cube is %d.\n",(6*l*l));
      break;

      //Cuboid
      case 2:
      printf("Enter the Length of the Cuboid: ");
      scanf("%d",&l);
      printf("Enter the Breadth of the Cuboid: ");
      scanf("%d",&b);
      printf("Enter the Height of the Cuboid: ");
      scanf("%d",&h);
      area= 2*((l*b)+(b*h)+(h*l));
      printf("The Volume of the Cuboid is %d.\n",(l*b*h));
      printf("The Total Surface Area of Cuboid is %0.2f.\n",area);
      break;

      //Sphere
      case 3:
      printf("Enter the Radius of the Sphere: ");
      scanf("%d",&l);
      vol= (4*l*l*l);
      vol= (3.14*vol)/3;
      area = (4*l*l);
      area= (area*3.14);
      printf("The Volume of the Sphere is %0.2f.\n",vol);
      printf("The Total Surface Area of Sphere is %0.2f.\n",area);
      break;

      //Cone
      case 4:
      printf("Enter the Radius of the Cone: ");
      scanf("%d",&l);
      printf("Enter the Height of the Cone: ");
      scanf("%d",&b);
      vol= (l*l*b);
      vol= (3.14*vol)/3;
      sarea=(l*l);
      sarea= (3.14*sarea);
      s= sqrt((b*b)+(l*l));
      larea= ((s*l)*3.14);
      area=(l*(l+s));
      area=(3.14*area);
      printf("The Volume of the Cone is %0.2f.\n",vol);
      printf("The Total Surface Area of the Cone is %0.2f.\n",area);
      printf("The Lateral Surface Area of the Cone is %0.2f.\n",larea);
      printf("The Base Surface Area of the Cone is %0.2f.\n",sarea);
      break;

      //Pyramid
      case 5:
      printf("Enter the Base Length of the Pyramid: ");
      scanf("%d",&l);
      printf("Enter the Base Width of the Pyramid: ");
      scanf("%d",&b);
      printf("Enter the Height of the Pyramid: ");
      scanf("%d",&h);
      vol= l*b*h;
      vol= (vol/3);
      printf("The Volume of the Pyramid is %0.2f.\n",vol);
      break;

      default:
      printf("Wrong Input\n");
        }
    }
        else
        printf("Wrong Input\n");

        //Asking for Repitition
    printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
    scanf("%d",&system);
    }

     }
     //Loop for Repitition
     while(system!=0);
}

//Function Declaration
int matrix()
{
//Function Definition

//Declaring Variable
    int system;
    printf("====================================Welcome to Matrix Solver====================================\n");

    do{
    //Option List
    printf(" Enter 1 for Addition.\n Enter 2 for Subtraction.\n Enter 3 for Multiplication.\n Enter 4 for Sum of Diagonal\n ");
    printf("Enter 5 for Sum of Rows.\n Enter 6 for Sum of Columns.\n Enter 7 for Transpose of Matrix.\n Enter 0 to Exit Application.\n");

    //User Choice
    scanf("%d",&system);

    if(system!=0)
    {
        //According to User Choice
        switch(system)
        {
        case 1:
          //Function Calling
        mat_add();
        break;

        case 2:
          //Function Calling
        mat_sub();
        break;

        case 3:
          //Function Calling
        mat_mult();
        break;

        case 4:
          //Function Calling
        mat_diag();
        break;

        case 5:
          //Function Calling
        mat_row();
        break;

        case 6:
          //Function Calling
        mat_col();
        break;

        case 7:
          //Function Calling
        mat_tran();
        break;

        default:
        printf("Wrong Input\n");
        }

        //Asking for Repitition
     printf("\nEnter 1 to Repeat. Enter 0 to Exit.\n");
     scanf("%d",&system);
    }

    }
    //Loop For Repitition
    while(system!=0);
}

//Function Declaration
int score()
{
//Function Definition

//Declaring Variables
int n,i,a[100],system,sum=0;
    float percent;

    printf("====================================Welcome to Score and Percentile Calculator====================================\n");
    do{
            //Asking to Continue
            printf("Enter 1 to Continue to Application. Enter 0 to Exit\n");
            scanf("%d",&system);

    if(system!=0)
    {
    printf("Enter Number of Subjects: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
     printf("Enter Marks in Subject %d out of 100: ",i);
     scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
     sum= sum+ a[i];
    }
    printf("The Total Marks Scored are %d out of %d\n",sum,(n*100));
    percent=sum/n;
    printf("You Scored %0.2f Percent.\n",percent);

    //Asking for Repitition
    printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
    scanf("%d",&system);

    }

    }
    //Loop for Repitition
    while(system!=0);
}

//Function Declaration
int game_1()
{
//Function Definition

//Declaring Variables
int system,comp,x=0,y=0;

     printf("====================================Welcome to Rock Paper Scissors Game====================================\n");

     do{
    //Option List
     printf(" Enter 1 for Rock.\n Enter 2 for Paper.\n Enter 3 for Scissors.\n Enter 0 to Exit Application.\n");
     scanf("%d",&system);

     //Comp Move Generator
     comp= (rand()%3);

     if(system!=0)
     {
      // According to Choice
      switch(system)
      {
   case 1:
   printf("Your Move: Rock\n");

   if(comp==0)
   {
       printf("Comp Move: Rock\n");
       printf("Result: Tie\n");
   }
   else if(comp==1)
   {
      printf("Comp Move: Paper\n");
      printf("Result: Comp Won\n");
      y++;
   }
   else if(comp==2)
   {
      printf("Comp Move: Scissors\n");
      printf("Result: You Won\n");
      x++ ;
   }
   break;


   case 2:
   printf("Your Move: Paper\n");
   if(comp==0)
   {
       printf("Comp Move: Rock\n");
       printf("Result: You Won\n");
       x++;
   }
   else if(comp==1)
   {
      printf("Comp Move: Paper\n");
      printf("Result: Tie\n");
   }
   else if(comp==2)
   {
      printf("Comp Move: Scissors\n");
      printf("Result: Comp Won\n");
      y++;
   }
   break;


   case 3:
   printf("Your Move: Scissors\n");
   if(comp==0)
   {
       printf("Comp Move: Rock\n");
       printf("Result: Comp Won\n");
       y++;
   }
   else if(comp==1)
   {
      printf("Comp Move: Paper\n");
      printf("Result: You Won\n");
      x++;
   }
   else if(comp==2)
   {
      printf("Comp Move: Scissors\n");
      printf("Result: Tie\n") ;
   }
   break;


   default:
   printf("Wrong Input\n");
      }
      //Scoreboard
     printf("Score Board: You = %d || Comp = %d\n",x,y);

     //Asking for Repitition
     printf("Enter 1 to Repeat. Enter 0 to Exit.\n");
     scanf("%d",&system);
     }

     }
     //Loop For Repitition
     while(system!=0);
}


//Function Declaration
int mat_add()
{
//Function Definition

//Declaring Variables
   int i,j,r1,r2,c1,c2,x[100][100],y[100][100],sum[100][100];
   printf("Enter the Number of Rows for Matrix 1: ");
   scanf("%d",&r1);
   printf("Enter the Number of Columns for Matrix 1: ");
   scanf("%d",&c1);

   //Inputting Matrix
   for(i=1;i<=r1;i++)
   {
       for(j=1;j<=c1;j++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&x[i][j]);
       }
   }


   printf("Enter the Number of Rows for Matrix 2: ");
   scanf("%d",&r2);
   printf("Enter the Number of Columns for Matrix 2: ");
   scanf("%d",&c2);

   //Inputting Matrix
   for(i=1;i<=r2;i++)
   {
       for(j=1;j<=c2;j++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&y[i][j]);
       }
   }

   printf("Matrix 1:\n");

   //Printing Matrix 1
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

      printf("Matrix 2:\n");

    //Printing Matrix 2
       for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }

    //Compatibility Check
   if(r1==r2 && c1==c2)
   {
       //Compatibility Pass
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            sum[i][j]=(x[i][j]+y[i][j]);
        }

    }
    printf("The answer is:\n ");

    //Printing Answer Matrix
     for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d\t",sum[i][j]);
        }
      printf("\n");
    }
   }
   else
    //Compatibility Fail
   printf("The matrices can't be added.\n ");
}

//Function Declaration
int mat_sub()
{
//Function Definition

//Declaring Variables
   int i,j,r1,r2,c1,c2,x[100][100],y[100][100],sum[100][100];
   printf("Enter the Number of Rows for Matrix 1: ");
   scanf("%d",&r1);
   printf("Enter the Number of Columns for Matrix 1: ");
   scanf("%d",&c1);

//Inputting Matrix
   for(i=1;i<=r1;i++)
   {
       for(j=1;j<=c1;j++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&x[i][j]);
       }
   }


   printf("Enter the Number of Rows for Matrix 2: ");
   scanf("%d",&r2);
   printf("Enter the Number of Columns for Matrix 2: ");
   scanf("%d",&c2);

   //Inputting Matrix
   for(i=1;i<=r2;i++)
   {
       for(j=1;j<=c2;j++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&y[i][j]);
       }
   }

   printf("Matrix 1:\n");

   //Printing Matrix
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

      printf("Matrix 2:\n");

      //Printing Matrix
       for(i=1;i<=r2;i++)
    {
        for(j=1;j<=c2;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }

    //Compatibility Check
   if(r1==r2 && c1==c2)
   {
       //Compatibility Passed
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            sum[i][j]=(x[i][j]-y[i][j]);
        }

    }
    printf("The answer is:\n ");

    //Printing Answer Matrix
     for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d\t",sum[i][j]);
        }
      printf("\n");
    }
   }
   else
    //Compatibility Fail
   printf("The matrices can't be added.\n ");
}

//Function Declaration
int mat_mult()
{
//Function Definition

//Declaring Variables
 int m,n,p,q,i,j,x[100][100],y[100][100],prod[100][100],sum,g;

   printf("Enter the Number of Rows for Matrix 1: ");
   scanf("%d",&m);
   printf("Enter the Number of Columns for Matrix 1: ");
   scanf("%d",&n);

   //Inputting Matrix
   for(i=1;i<=m;i++)
   {
       for(j=1;j<=n;j++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&x[i][j]);
       }
   }

   printf("Enter the Number of Rows for Matrix 2: ");
   scanf("%d",&p);
   printf("Enter the Number of Columns for Matrix 2: ");
   scanf("%d",&q);

   //Inputting Matrix
   for(j=1;j<=q;j++)
   {
       for(i=1;i<=p;i++)
       {
           printf("Enter Term [%d][%d]: ",i,j);
           scanf("%d",&y[i][j]);
       }
   }

  printf("Matrix 1:\n");

  //Printing Matrix
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

      printf("Matrix 2:\n");

     //Printing Matrix
       for(i=1;i<=p;i++)
    {
        for(j=1;j<=q;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }

    //Compatibility Check
    if(n==p)
    {
        //Compatibility Passed
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=q;j++)
            {
                sum=0;
             for(g=1;g<=p;g++)
             {
                 sum=sum +(x[i][g]*y[g][j]);
             }
             prod[i][j]=sum;
            }
            printf("\n");
        }

        printf("The Product in matrix form is:\n");

        //Printing Answer Matrix
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=q;j++)
            {
             printf("%d\t",prod[i][j]);
            }
            printf("\n");
        }
    }

    else if(n!=p)
    {
        //Compatibility Fail
        printf("The matrices are not compatible. Hence they cannot be multiplied.");
    }

}

//Function Declaration
int mat_diag()
{
//Function Definition

//Declaring Variables
    int i,j,c,r,x[i+20][j+20],sum=0;

    printf("Enter Number of Rows: ");
    scanf("%d",&r);
    printf("Enter Number of Column: ");
    scanf("%d",&c);

    //Checking Compatibilty
    if(c==r)
    {
      //Inputting Matrix
        for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Enter Element [%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("The Following Matrix has been entered:\n");

      //Printing Entered Matrix
       for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<=r;i++)
    {
        sum= sum+ x[i][i];
    }
    printf("\nThe sum of the diagonal is %d.",sum);
    }

    //Compatibility Fail
    else
    printf("Diagonal cannot be calculated as it is not a square matrix.");

}

//Function Declaration
int mat_row()
{
//Function Definition

//Declaring Variable
    int i,j,c,r,x[i+20][j+20],sum;

    printf("Enter Number of Rows: ");
    scanf("%d",&r);
    printf("Enter Number of Column: ");
    scanf("%d",&c);

    //Inputting Matrix
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" Enter Element [%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }

    //Printing Entered Matrix
    printf("The Following Matrix has been entered:\n");
       for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=r;i++)
    {
        sum=0;
        for(j=1;j<=c;j++)
        {
            sum=sum+x[i][j];


        }
        printf("The sum of elements in row %d = %d\n",i,sum);

    }
}

//Function Declaration
int mat_col()
{
//Function Definition

//Variable Declaration
 int i,j,c,r,x[i+20][j+20],sum;

    printf("Enter Number of Rows: ");
    scanf("%d",&r);
    printf("Enter Number of Column: ");
    scanf("%d",&c);

    //Inputting Matrix
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" Enter Element [%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }

    //Printing Matrix
    printf("The Following Matrix has been entered:\n");
       for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    for(j=1;j<=c;j++)
    {
        sum=0;
        for(i=1;i<=r;i++)
        {
            sum=sum+x[i][j];


        }
        printf("The sum of elements in Column %d = %d\n",j  ,sum);

    }
}

//Function Declaration
int mat_tran()
{
//Function Definition

//Declaring Variables
    int i,j,c,r,x[i+20][j+20];

    printf("Enter Number of Rows: ");
    scanf("%d",&r);
    printf("Enter Number of Column: ");
    scanf("%d",&c);

    //Inputting Matrix
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" Enter Element [%d][%d]: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }

    //Printing Given Matrix
    printf("The Following Matrix has been entered:\n");
       for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

    //Printing Matrix
    printf("The Transpose of the Matrix is:\n");
    for(j=1;j<=c;j++)
    {
        for (i=1;i<=r;i++)
        {
            printf("%d\t",x[i][j]);

        }
        printf("\n");
    }
}

//Function Declaration
 int factorial()
 {
//Function Definition

//Declaring Variables
     int i,n,p=1;
     printf("Enter a Number: ");
     scanf("%d",&n);

     //Loop For Multiplying
     for(i=1;i<=n;i++)
     {
         p=p*i;
     }
     printf("The Factorial of %d is %d.\n",n,p);
 }

//Function Declaration
 int average()
 {
//Function Definition

//Declaring Variables
    int n,i,sum,a[i];
    float avg;

    printf("Enter Number of Terms: ");
    scanf("%d",&n);

    //Inputting Terms
    for(i=1;i<=n;i++)
    {
     printf("Enter Term %d: ",i);
     scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
     sum= sum+a[i];
    }

    avg=(sum);
    avg=(avg/n);
    printf("The Average is %0.2f\n",avg);
 }

//Function Declaration
 int exponent()
 {
//Function Definition

//Declaring Variables
  int i,b,p,prod=1;
  printf("Enter the Base Number: ");
  scanf("%d",&b);
  printf("Enter the Power: ");
  scanf("%d",&p);

  //Loop For Multiplication
  for(i=1;i<=p;i++)
  {
     prod= prod*b;
  }
  printf("The Answer is %d.\n",prod);
 }

//Function Declaration
 int root()
 {
//Function Definition

//Declaring Variables
   int n;
   float z;

   printf("Enter a Number: ");;
   scanf("%d",&n);
   z= sqrt(n);
   printf("The Answer is %f.\n",z);
 }

//Function Declaration
 int prime()
 {
//Function Definition

//Declaring Variables
  int n,i,k;
    printf("Enter A Number: ");
    scanf("%d",&n);

    //Loop for Checking Multiples
    for(i=2;i<=n;i++)
    {
        if(i==n)
        {
        printf("%d is a Prime Number. \n",n);
        goto k;
        }

        if(n%i==0)
        {
        printf("%d is not a Prime Number.\n",n);
        goto k;
        }

    }
     k:1;

 }

//Function Declaration
 int checks()
 {
//Function Definition

//Declaring Variables
  int n,d;
  printf("Enter A Number to Test: ");
  scanf("%d",&n);
  printf("Enter the Divisor: ");
  scanf("%d",&d);

  //Divisibility Check
  if(n%d==0)
  {
      //Divisibility Passed
    printf("%d is divisible by %d.\n",n,d);
  }
  else
  {
      //Divisibility Failed
    printf("%d is not divisible by %d.\n",n,d);
  }

 }

//Function Declaration
 int armstrong(int x, int num)
 //Inputting 2 variables and storing as x and num respectively
 {
//Function Definition

//Declaring Variables
  int i,j, product, sum=0,z;
  for(i=1;i<=x;i++)
   {
    z= num%10;
    product=1;

    //Checking the Armstrong Sum
    for(j=1;j<=x;j++)
    {
        product=(product*z);
    }
   sum= (sum+product);
   num= num/10;
   }
   //returning the value
   return sum;

  }

//Function Declaration
 int fibo()
 {
//Function Definition

//Declaring Variables

  int a=1,b=0,n,N;
  printf("Enter Number of Terms in Fibonacci Series\n");
  scanf("%d",&N);

  //Loop for Fibonacci
  for(n=1;n<=N;n++)
    {
     if(n%2==1)
      {
       a=a+b;
       printf("%d, ",a);
      }
    else
      {
        b=a+b;
        printf("%d, ",b);
      }
     }
  printf("\n");
 }

//Function Declaration
 int multtab()
 {
//Function Definition

//Declaring Variables
  int x,y,p;

//Loop For Printing Every Digits Table
    for(x=1;x<=10;x++)
    {
        //Multiple of DIgit
        for(y=1;y<=10;y++)
        {
            p=(x*y);
            printf("\t%d",p);
        }
    printf("\n");
    }

 }

//Function Declaration
 int digtab()
 {
//Function Definition

//Declaring Variables
  int i,n;
  printf("Enter The Number Whose Table You Want:");
  scanf("%d",&n);

  //Loop For Printing Multiples
  for(i=1;i<=10;i++)
  {
      printf("%d times %d is %d.\n",n,i,(n*i));
  }
  printf("\n");
 }

//Function Declaration
 int distance()
 {
//Function Definition

//Declaring Variables
   float a,b,x,y,x1,y1,x2,y2,d;

   //Inputting Coordinates
    printf("Please Enter X and Y Coordinate of Point A\n");
    scanf("%f%f",&x1,&y1);

    //Inputting Coordinates
    printf("Please Enter X and Y Coordinate of Point B\n");
    scanf("%f%f",&x2,&y2);

    x=x1-x2;
    y=y1-y2;

    d= sqrt(x*x+y*y);

    printf("The Distance is %f\n", d );

 }

//Function Declaration
 int midpoint()
 {
//Function Definition

//Declaring Variables
    float a,b,x,y,x1,y1,x2,y2,d;

    //Inputting Coordinates
    printf("Please Enter X and Y Coordinate of Point A\n");
    scanf("%f%f",&x1,&y1);

    //Inputting Coordinates
    printf("Please Enter X and Y Coordinate of Point B\n");
    scanf("%f%f",&x2,&y2);

    a=(x1+x2)/2;
    b=(y1+y2)/2;

    printf("The Midpoint is ( %0.2f,%0.2f )\n", a,b );

 }

int main ()
{
    //Declaration of Variables
    int d,repeat,choice;
    char ch[100];

    //Authentication system
    printf("Welcome to the Portal\n");
    printf("Enter your Name: ");
    scanf("%s",&ch);
    printf("Enter Your Password: ");
    scanf("%d",&d);

    //Authentication Check
    if((strcmp(ch,"rushi")==0 ||strcmp(ch,"ishaan")==0 ||strcmp(ch,"dale")==0 ||strcmp(ch,"dhirendra")==0  ||strcmp(ch,"finn")==0) && d==51234 )
    {
        //Authentication Successful
        printf("Welcome to the application\n\n");

        //Application List
        do{
        printf(" Enter 1: Business- Taxes Calculator\n Enter 2: Business- Interest Calculator\n Enter 3: Business- Future Goal Setter\n");
        printf(" Enter 4: Mathematics- Basic Calculator\n Enter 5: Mathematics- Advanced Functions Calculator\n Enter 6: Mathematics- Volume and Area Calculator\n");
        printf(" Enter 7: Mathematics- Matrix Solver\n Enter 8: Mathematics- Score and Percentile Calculator\n Enter 9: Entertainment- Game: Rock Paper Scissors\n");

        //User Choice
        scanf("%d",&choice);

        //Opening Application According to User Choice
        switch (choice)
    {
    case 1:
    //Function Call
    taxes();
    printf("====================================Thank you for Using Taxes Calculator====================================\n ");
    break;

    case 2:
    //Function Call
    interest();
    printf("====================================Thank you for Using Interest Calculator====================================\n ");
    break;

    case 3:
    //Function Call
    goal();
    printf("====================================Thank you for Using Future Goal Setter====================================\n ");
    break;

    case 4:
    //Function Call
    basic();
    printf("====================================Thank you for Using Basic Calculator====================================\n ");
    break;

    case 5:
    //Function Call
    advanced();
    printf("====================================Thank you for Using Advanced Calculator====================================\n ");
    break;

    case 6:
    //Function Call
    volume();
    printf("====================================Thank you for Using Volume and Area Calculator====================================\n ");
    break;

    case 7:
    //Function Call
    matrix();
    printf("====================================Thank you for Using Matrix Solver====================================\n ");
    break;

    case 8:
    //Function Call
    score();
    printf("====================================Thank you for Using Score And Percentile Calculator====================================\n ");
    break;

    case 9:
    //Function Call
    game_1();
    printf("====================================Thank you for Using Rock Paper Scissors Game====================================\n ");
    break;

    default:
    printf("Wrong Input\n");

    }
        //Asking if User wants to Repeat
        printf("\nEnter 0 to Exit the Program. Enter 1 to Show Application List.\n");
        scanf("%d",&repeat);

        //Condition to Check for Repitition
        }while (repeat!=0);
    }
    //Failed Authentication
    else
    printf("Access Denied");


}
