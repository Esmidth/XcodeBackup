//
//  main.cpp
//  UVa 340 #Master-Mind Hints
//
//  Created by Steven Chang on 6/1/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <iostream>

using namespace std;
bool innnp(int* nums,int len)
{
    for (int i = 0; i < len; i++) {
        if(!cin >> nums[i])
        {
            return false;
        }
    }
    return true;
}
bool cp(int *nums1,int * nums2,int len)
{
    for (int i = 0; i < len; i++) {
        if(!(nums2[i] = nums1[i]))
            return false;
    }
    return true;
}
bool hajimeru(int* nums1,int *nums2,int len)
{
    return innnp(nums2, len) && cp(nums1, nums2,len);
}
int main()
{
    int nums;
    int a,b;
    int ti = 0;
    while (cin >> nums && nums != 0) {
        ti++;
        int nums1[nums]; // input answer
        int nums2[nums]; // origin answer
        /*
        while (nums1[0] != 0 && nums1[1] != 0 && nums1[2] != 0 && nums1[3] != 0 ) {
            for (int i = 0; i < nums; i++) {
                cin >> nums1[i];
            }
        }
         */
        cout << "Game " << ti << ":\n";
        for (hajimeru(nums1,nums2,nums);
             (nums1[0] != 0 && nums1[1] != 0 && nums1[2] != 0 && nums1[3] != 0)
             ;
             innnp(nums1, nums)) {
            a = 0;
            b = 0;
            for (int j = 0; j < nums; j++) {
                for (int k = 0; k < nums; k++) {
                    if (nums2[j] == nums1[k]) {
                        if (j == k) {
                            a++;
                        }
                        else
                            b++;
                    }
                }
            }
            cout << "    (" << a << ", " << b << ")\n";
        }

        
    }
}
