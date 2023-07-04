#include <iostream>
using namespace std;
void code()
{
    int countd = 0, counti = 0, counte = 0;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    switch (a)
    {
    case 0:
        countd++;
        break;
    case 1:
        counti++;
        break;
    default:
        counte++;
        break;
    }
    switch (b)
    {
    case 0:
        countd++;
        break;
    case 1:
        counti++;
        break;
    default:
        counte++;
        break;
    }
    switch (c)
    {
    case 0:
        countd++;
        break;
    case 1:
        counti++;
        break;
    default:
        counte++;
        break;
    }
    switch (d)
    {
    case 0:
        countd++;
        break;
    case 1:
        counti++;
        break;
    default:
        counte++;
        break;
    }
    switch (e)
    {
    case 0:
        countd++;
        break;
    case 1:
        counti++;
        break;
    default:
        counte++;
        break;
    }

    if (counte > counti) 
    {
        cout << "ENGLAND" << endl;
    }
    else if(counti > counte) 
    {
        cout << "INDIA" << endl;
    }
    else
        cout << "DRAW" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        code();
    }
    return 0;
}