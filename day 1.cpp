#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   char n;
   cout<<"enter any charecter = ";
   cin>>n;
   if('A'==n || 'a'==n || 'E'==n || 'e'==n || 'I'==n || 'i'==n || 'O'==n || 'o'==n || 'U'==n || 'u'==n)
   {
       cout<<" char is vowel";
   }
   else
   {
       if(('A'<=n && 'Z'>=n) || ('a'<=n && 'z'>=n))
       {
          cout<<"char is consonent";
        }
        else
        {
           cout<<"invalid input";
        }
   }
}
