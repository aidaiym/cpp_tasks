// Calculate the value of the function a=0.3, n=10, i varies from 1 to 10 in steps 1.
#include <iostream>
 
using namespace std;
 
int main()
{
   float a = 0.3, n = 10, i, t;
   for (i = 1; i < 10; i++)
   {
       if (sin((i * i) / n) > 0)
       {
           t = a * sin((i * i) / n);
           cout << "i=" << i << " sin()>0, t= " << t << endl;
       }
       else if (sin((i * i) / n) <= 0)
       {
           t = cos(i + 1 / n);
           cout << "i=" << i << " sin()<=0, t= " << t << endl;
       }
   }
   return 0;
}
