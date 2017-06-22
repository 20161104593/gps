//
//  main.c
//  gps
//
//  Created by 20161104593 on 17/6/16.
//  Copyright © 2017年 20161104593. All rights reserved.
//
#include <stdio.h>
//#include <string.h>
int main(int argc,const char *argv[])
{
    int i;
    FILE *fp;
    char str1[65];
    char str2[65];
    char lat[9];  //  纬度
    char time[6];
    fp=fopen("//Users//a20161104593//Desktop//gps//GPS170510.log","r+");
    fscanf(fp,"%s%s",str1,str2);
    printf("%s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
    {
        lat[i]=str1[i+16];
    }
    lat[8]='\0';
    printf("纬度 :%s\n",lat);
    for(i=0;i<6;i++)
    {
        time[i]=str1[i+8];
    }
    time[5]='\0';
    printf("UTC时间:%s\n",time);
    
    
    
    
//  char delims[] = ",";
//  char *result = NULL;
//  result = strtok( str1, delims );//分割函数
//  while( result != NULL )
//  {
//      printf( "\"%s\"\n", result );
//      result = strtok( NULL, delims );
//  }
    fclose(fp);
    return 0;
}
