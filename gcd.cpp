//
// Created by Sidha on 08-09-2020.
//

int gcd ( const int a, const int b)
{
    if ( a < 0 || b < 0)
        return -1;
    else if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if(a == b)
        return a;
    if (a > b)
        return gcd(a-b,b);
    return gcd(a, b-a);

}
