#include <stdio.h>      
#include <stdlib.h>
#include <cstdio>
#include <ctime>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("example.txt","w");
    for(int i=0;i<100000000;i++)
    {
        int random_number = rand()%999999999;
        fprintf(fp, "%09d\n",random_number);
    }
}