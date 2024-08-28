//Insert at the begininig of circulat linked list
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
//Naive method