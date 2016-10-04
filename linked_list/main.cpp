#include <iostream>
#include<cstdlib>
#include"list.h"
using namespace std;

int main()
{
    list my_list;
    my_list.AddNode(1);
    my_list.AddNode(2);
    my_list.AddNode(3);
    my_list.AddNode(4);
    my_list.AddNode(5);
    my_list.AddNode(6);
    my_list.AddNode(7);

    my_list.PrintList();

    my_list.DeleteNode(5);

    my_list.PrintList();




    return 0;
}
