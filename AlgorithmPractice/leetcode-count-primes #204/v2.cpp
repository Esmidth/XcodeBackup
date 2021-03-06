//
//  v2.cpp.cpp
//  AlgorithmPractice
//
//  Created by Steven Chang on 4/27/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

int countPrimes(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countPrimes(n));
    
}

int countPrimes(int n)
{
    bool *Del = new bool[n]; // 标记是否被划去
    Del[2] = false;
    
    for(int i=3; i<n; ++i)
        if(i%2 == 0)
            Del[i] = true;  // 2的倍数全部划去
        else
            Del[i] = false;
    
    for(int i=3; i<n; i+=2)
        if(!Del[i])  // 之后第一个未被划去
        {
            if(i*i>n)  break;  // 当前素数的平方大于n，跳出循环
            for(int j=2; i*j<n; ++j)
                Del[i*j] = true;
        }
    
    int count = 0;
    for(int i=2; i<n; ++i)
        if(!Del[i])
            ++count;
    
    delete [] Del;
    return count;
}