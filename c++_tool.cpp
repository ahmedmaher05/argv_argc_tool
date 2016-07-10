#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
void upper(string& str  )
{
  for (int i=0;i<str.length();i++)
  {
      str[i]=toupper(str[i]);
  }
}


int main(int argc , char *argv[])
{
     string s1 = "print" ;
     string s2 = "reverse";
     string s3 = "upper";
     string s4 = "shuffle";
     string s5 = "shuffleStatement";
     string s6 = "delete";
     string s7 = "middle";
     string s8 = "add";
     string s9 = "random";
    if (argv[1] == s1)
    {
if(argc>2)
{
       for(int i=2;i<argc;i++)
        {
        cout<<argv[i];
        cout<<" " ;
        }
}
else
    cout<<"Incorrect Number of Arguments";
    }
    else if (argv[1] == s2)
    {
       for (int i=argc ; i>2 ; i--)
          {
           cout<<argv[i-1];
           cout<<" " ;
          }
    }
    else if (argv[1] == s3)
    {
        for(int i=2;i<argc;i++)
          {
          string str=argv[i];
          upper(str);
           cout<<str;
           cout<<" " ;
         }
    }
    else if (argv[1]==s4)  //shuffle , if wrong try argv[][] directly not to turn it to string
    {
        if(argc>3)
            cout<<"Incorrect Number of Arguments";
        else
        {
          string str=argv[2];
          if(str.length()%2==0)
          {
              for(int i=0;i<str.length();i=i+2)
              {

                  cout<<str[i+1]<<str[i];
              }

          }
          else if(str.length()%2==1)
          {
              for(int i=0;i<str.length()-1;i=i+2)
              {
                   cout<<str[i+1]<<str[i];

              }
              cout<<str[str.length()-1];


          }
        }
    }


else if (argv[1]==s5) //shuffle statement
{
    if(argc%2==0)
    {

    for(int i=2;i<argc;i+=2)
    {
        cout<<argv[i+1]<<" "<<argv[i]<<" ";
    }

    }
    else if(argc%2==1)
    {
          for(int i=2;i<argc;i+=2)
             {
        cout<<argv[i+1]<<" "<<argv[i]<<" ";
             }
        cout<<"hi";

    }
}

else if (argv[1]==s6)
{
    char* p1;
    long int deleted = strtol(argv[2], &p1, 10);
    string a="0";
    if(argc<3)
    cout<<"Incorrect Number of Arguments";

    else if((*p1)||deleted<=0)
        cout<<"Incorrect Data Type";

else if(argc-3<deleted)
cout<<"Incorrect Number of Arguments";
else
      for(int i=3;i<argc;i++)
      {
      if(i!=deleted+2)
        {
      cout<<argv[i];
      cout<<" " ;
        }
      }
}
else if(argv[1]==s7)
{
  int i = argc;
  if(argc%2==0)
  {

        cout<<argv[argc/2]<<" "<<argv[(argc/2)+1];
        cout<<" " ;
  }
  else if(argc%2==1)
  {
      int num=ceil(argc/2);
         cout<<argv[num+1];
  }

}
else if(argv[1]==s8)
{long int sum=0;
    bool valid=true;
    char* p[100];
    for(int i=2;i<argc;i++)
    {
        long int a_int = strtol(argv[i], &p[i], 10);
        if(!(*p[i]))
        sum=sum+a_int;
        else
        valid=false;

    }
    if(valid)
     cout<<sum;
    else
        cout<<"Incorrect Data Type";

}

else if(argv[1]==s9)
{



char* p1;
char* p2;
char* p3;
char* p4;

long int a_int = strtol(argv[2], &p1, 10);
long int b_int = strtol(argv[3], &p2, 10);
long int c_int = strtol(argv[4], &p3, 10);
long int d_int = strtol(argv[5], &p4, 10);
if (!(*p1)&&!(*p2)&&!(*p3)&&!(*p4))
{
        srand(d_int);
    for(int i=0;i<a_int;i++)
    {
       int x= rand()% c_int + b_int ;
       cout<<x<<" ";
    }
}
else
     cout<<"Incorrect Data Type";

}

    else
        cout<<"Undefined Command ";

    return 0;

}
