//
//  main.c
//  gps
//
//  Created by 20161104593 on 17/6/16.
//  Copyright © 2017年 20161104593. All rights reserved.
//
#include <stdio.h>
int main()
{
    FILE *fp;
    FILE *fr;
    char a[100]={0};
    int i=0;
    fp=fopen("//Users//a20161104593//Desktop//gps//1.txt","r");
    fr=fopen("//Users//a20161104593//Desktop//gps//2.txt","w");
    for(i=0;i<1;i++)
    {
        fscanf(fp,"%s\n",&a[i]);
    }
    for(i=0;i<1;i++)
    {
        fprintf(fr,"%s\n",&a[i]);
        printf("%s",&a[i]);
    }
    fclose(fr);
    return 0;
}
