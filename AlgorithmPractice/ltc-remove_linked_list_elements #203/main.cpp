//
//  main.cpp
//  #203 ltc-remove_linked_list_elements
//
//  Created by Steven Chang on 5/3/15.
//  Copyright (c) 2015 Steven Chang. All rights reserved.
//

#include <stdio.h>

struct ListNode
{
    int val;
    ListNode * next;
};

struct ListNode* removeElements(struct ListNode* head,int val)
{
    if(head == NULL)
        return NULL;
    if(head->val == val) {
        if (head->next != NULL) {
            return removeElements(head->next, val);
        }
        else
            return head;
    }
    struct ListNode* temp = head;
    while(temp->next->next != NULL)
    {
        if(temp->next->val != val) {
            temp = temp->next;
        }
        else
        {
            temp->next = temp->next->next;
        }
    }
    if(temp->next->val == val)
        temp->next = NULL;
    return head;
}

int main(int argc, const char * argv[]) {
    struct ListNode in[7];
    in[6] = {6, NULL};
    in[5] = {5,&in[6]};
    in[4] = {4,&in[5]};
    in[3] = {3,&in[4]};
    in[2] = {5,&in[3]};
    in[1] = {2,&in[2]};
    in[0] = {1,&in[1]};
    struct ListNode* i = &in[0];
    /*
    while(true)
    {
        printf("%d ",i->val);
        if(i->next == NULL)
        {
            break;
        }
        i->val = i->next->val;
        i->next = i->next->next;
    }*/
    i = removeElements(&in[0], 6);
    if(i == NULL){
        printf("NULL");
        return 0;
    }

    while(true)
    {
        printf("%d ",i->val);
        if(i->next == NULL)
        {
            break;
        }
        i->val = i->next->val;
        i->next = i->next->next;
    }
    return 0;
}
