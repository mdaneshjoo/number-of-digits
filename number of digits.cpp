#include <iostream>
using namespace std;
int main()
{
    long int num;
    int k;
    int r;
    int i = 1;
    cin >> num;
    k = num / 10;
    r = num % 10;
    do
    {
      r+=k%10;
      k=k/10;
        i++;
    } while (k != 0);
    cout<<r<<endl<<"number of digits: "<<i<<endl;
}