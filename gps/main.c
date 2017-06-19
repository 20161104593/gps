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
    char a[65];
    fp=fopen("//Users//a20161104593//Desktop//gps//1.txt","r");
    while(fgets(a,9,fp)!=NULL)
    {
        printf("%s",a);
    }
    fclose(fp);
    return 0;
}
