/*CGPA calculator using Class-obj,array of obj in C++*/
#include<iostream>
#include<conio.h>
using namespace std;
class CGPcalculate{
float ft,mt,f,q,p,a;
    float Cr,TCr,CG,TotalMark,Credit;
public:
    getmark()
    {
        cout<<"Enter First Term Mark Out Of 100 :";
        cin>>ft;
         cout<<"Enter Mid Term Mark Out Of 100 :";
        cin>>mt;
         cout<<"Enter Final Term Mark Out Of 100 :";
        cin>>f;
         cout<<"Enter Quiz Mark Out Of 100 :";
        cin>>q;
         cout<<"Enter Presentation Mark Out Of 100 :";
        cin>>p;
         cout<<"Enter Attendence Mark Out Of 100 :";
        cin>>a;
    }
   float findtotal()
    {
        float FirstTerm=(ft*20)/100;
        float MidTerm=(mt*20)/100;
        float Final=(f*35)/100;
        float Quiz=(q*5)/100;
        float Presentation=(p*15)/100;
        float Attendance=(a*5)/100;
                cout<<"Enter Credit Hour For This Subject :";
        cin>>Credit;
    TotalMark=(FirstTerm+MidTerm+Final+Quiz+Presentation+Attendance);
      if( TotalMark>=90&& TotalMark<=100)
      {
          return  4.00*Credit;
      }
      else if( TotalMark>=87&& TotalMark<=89)
      {
          return  3.7*Credit;
      }
     else  if( TotalMark>=84&& TotalMark<=86)
      {
          return  3.4*Credit;
      }
      else if( TotalMark>=80&& TotalMark<=83)
      {
          return  3.1*Credit;
      }
    else   if( TotalMark>=77&& TotalMark<=79)
      {
          return  2.8*Credit;
      }
     else  if( TotalMark>=74&& TotalMark<=76)
      {
          return  2.5*Credit;
      }
     else  if( TotalMark>=70&& TotalMark<=73)
      {
          return  2.2*Credit;
      }
      else if(TotalMark>=65&& TotalMark<=69)
      {
          return 1.5*Credit;
      }
       else if(TotalMark>=60&& TotalMark<=64)
      {
          return 1.00*Credit;
      }

      else
      {
          return 0.00*Credit;
      }
    }
    float Ffindtotal()
    {
        float FirstTerm=(ft*20)/100;
        float MidTerm=(mt*20)/100;
        float Final=(f*35)/100;
        float Quiz=(q*5)/100;
        float Presentation=(p*15)/100;
        float Attendance=(a*5)/100;
                cout<<"Enter Credit Hour For This Subject :";
        cin>>Credit;
    TotalMark=(FirstTerm+MidTerm+Final+Quiz+Presentation+Attendance);
      if( TotalMark>=90&& TotalMark<=100)
      {
          return  4.00*Credit;
      }
      else if( TotalMark>=87&& TotalMark<=89)
      {
          return  3.7*Credit;
      }
     else  if( TotalMark>=84&& TotalMark<=86)
      {
          return  3.4*Credit;
      }
      else if( TotalMark>=80&& TotalMark<=83)
      {
          return  3.1*Credit;
      }
    else   if( TotalMark>=77&& TotalMark<=79)
      {
          return  2.8*Credit;
      }
     else  if( TotalMark>=74&& TotalMark<=76)
      {
          return  2.5*Credit;
      }
     else  if( TotalMark>=70&& TotalMark<=73)
      {
          return  2.2*Credit;
      }

      else
      {
          return 0.00*Credit;
      }
    }

};
int main()
{
    CGPcalculate ob[50];
    CGPcalculate a;
    int n,t,F;
    float sum1=0.00,s1,SUM=0,s2,sum2;
    float credithr,tcredithr;
    cout<<"\t\t\t\t\t\t\t\t\t**IUBAT SGPA-CGPA CALCULATOR**"<<endl;
    cout<<"\t\t\t\t\t\t\t\t.............................................\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tEnter Total Semester Numbers: ";
    cin>>t;
    for(int a=0;a<t;a++)
    {
        cout<<"\n\t\t\t\t\t\t\t\t\t\t"<<a+1<<" SEMESTER"<<endl;
    cout<<"\t\t\t\t\t\t\t\tEnter Total Number Of Non-Fundamental Subjects: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cout<<"\t\t\t\t\t\t\t\tEnter Marks for "<<i+1 <<" subject"<<endl;
        ob[i].getmark();
         s1=ob[i].findtotal();
         sum1=sum1+s1;
    }
    float p=sum1;
    sum1=0.00;
    cout<<p<<endl;
     cout<<"\t\t\t\t\t\t\t\tEnter Total Number Of Fundamental Subjects: ";
    cin>>F;
     for(int j=0;j<F;j++)
    {
         cout<<"\t\t\t\t\t\t\t\tEnter Marks for "<<j+1 <<" subject"<<endl;
        ob[j].getmark();
         s2=ob[j].Ffindtotal();
         sum2=sum2+s2;
    }
    float q=sum2;
    float cp=p+q;
    cout<<cp<<endl;
    sum2=0.00;
    cout<<"2nd sem "<<q<<endl;
    SUM=SUM+q+p;
    cout<<SUM<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\tEnter Total Credit Hour For the Last Semester: ";
cin>>credithr;
   float SG=cp/credithr;
   cout<<"\n\t\t\t\t\t\t\t\t\t\tSGPA For This Semester\t"<<SG<<endl;;
    }
    cout<<"Enter Total Credit Hour Till the Last Semester: ";
cin>>tcredithr;
float CG=SUM/tcredithr;
 cout<<"\n\t\t\t\t\t\t\tCGPA For This Semester\t"<<CG<<endl;
   getch();
}
