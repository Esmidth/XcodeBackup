#ifndef __MM__
#define __MM__

int constrain(int x,int a,int b)
{
    if(x >= a && x <= b)
    {
        return x;
    }
    else if(x < a)
    {
        return a;
    }
    else
        return b;
}

int16_t constrain(int16_t x,int16_t a,int16_t b)
{
    if(x >= a && x <= b)
    {
        return x;
    }
    else if(x < a)
    {
        return a;
    }
    else
        return b;
}

double sin(double rad)
{
    return rad;
}

float sin(float rad)
{
    return rad;
}

double cos(double cos)
{
    return cos;
}

float cos(float sin)
{
    return sin;
}

int min(int lb,int rb)
{
    if(lb < rb)
        return lb;
    else
        return rb;
}

int max(int lb,int rb)
{
    if(lb > rb)
        return lb;
    else
        return rb;
}


#endif