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
    char time[7]; //  UTC时间
    char lon[10];  //  经度
    char speed[5];//  速度
    char lat2[9];  //  纬度
    char time2[7]; //  UTC时间
    char lon2[10];  //  经度
    char speed2[5]; //  速度
    fp=fopen("//Users//a20161104593//Desktop//gps//GPS170510.log","r+");
    fscanf(fp,"%s%s",str1,str2);
    printf("%s\n%s\n",str1,str2);
    printf("GPRMS\n");
    for(i=0;i<8;i++)
    {
        lat[i]=str1[i+16];
    }
    lat[8]='\0';
    printf("纬度 :%s\n",lat);
    for(i=0;i<6;i++)
    {
        time[i]=str1[i+7];
    }
    time[6]='\0';
    printf("UTC时间:%s\n",time);
    for(i=0;i<9;i++)
    {
        lon[i]=str1[i+27];
    }
    lon[9]='\0';
    printf("经度:%s\n",lon);
    for(i=0;i<5;i++)
    {
        speed[i]=str1[i+39];
    }
    speed[4]='\0';
    printf("速度:%s\n",speed);

    printf("GPGAA\n");
    for(i=0;i<8;i++)
    {
        lat2[i]=str2[i+14];
    }
    lat2[8]='\0';
    printf("纬度 :%s\n",lat2);
    for(i=0;i<6;i++)
    {
        time2[i]=str2[i+7];
    }
    time2[6]='\0';
    printf("UTC时间:%s\n",time2);
    for(i=0;i<9;i++)
    {
        lon2[i]=str2[i+25];
    }
    lon2[9]='\0';
    printf("经度:%s\n",lon2);
    for(i=0;i<1;i++)
    {
        speed2[i]=str2[i+37];
    }
    speed2[1]='\0';
    printf("速度:%s\n",speed2);
    
    
    
    
    
//  char delims[] = ",";
// char *result = NULL;
//  result = strtok( str1, delims );//分割函数
//  while( result != NULL )
//  {
//      printf( "\"%s\"\n", result );
//      result = strtok( NULL, delims );
//  }

    
    fclose(fp);
    return 0;
}
