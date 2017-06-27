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
    FILE *fw;
    char str1[65];
    char str2[65];
    char lat[9];    //  纬度
    char time[7];   //  UTC时间
    char lon[10];   //  经度
    char speed[6];  //  速度
    char day[7];    //  UTC日期
    char lat2[9];   //  纬度
    char time2[7];  //  UTC时间
    char lon2[10];  //  经度
    char number[5]; //  卫星数量
    char high[5];  //  海拔高度
    fw=fopen("//Users//a20161104593//Desktop//gps//output.csv","w+");
    fp=fopen("//Users//a20161104593//Desktop//gps//GPS170510.log","r+");
    while(fscanf(fp,"%s%s",str1,str2)!=EOF)
    {
        
        printf("%s\n%s\n",str1,str2);
        printf("GPRMS\n");
        for(i=0;i<8;i++)
        {
            lat[i]=str1[i+16];
        }
        lat[8]='\0';
        printf("纬度:%s度\n",lat);
        fprintf(fw,"纬度:%s度,",lat);
        for(i=0;i<6;i++)
        {
            time[i]=str1[i+7];
        }
        time[6]='\0';
        printf("UTC时间:%c%c时%c%c分%c%c秒\n",time[0],time[1],time[2],time[3],time[4],time[5]);
        fprintf(fw,"UTC时间:%c%c时%c%c分%c%c秒,",time[0],time[1],time[2],time[3],time[4],time[5]);
        for(i=0;i<9;i++)
        {
            lon[i]=str1[i+27];
        }
        lon[9]='\0';
        printf("经度:%s度\n",lon);
        fprintf(fw,"经度:%s度,",lon);
        for(i=0;i<5;i++)
        {
            speed[i]=str1[i+39];
        }
        speed[5]='\0';
        printf("速度:%s节\n",speed);
        fprintf(fw,"速度:%s节,",speed);
        for(i=0;i<7;i++)
        {
            day[i]=str1[i+51];
        }
        day[6]='\0';
        printf("UTC日期:%c%c日%c%c月%c%c年\n",day[0],day[1],day[2],day[3],day[4],day[5]);
        fprintf(fw,"UTC日期:%c%c日%c%c月%c%c年,",day[0],day[1],day[2],day[3],day[4],day[5]);
        
        printf("GPGAA\n");
        for(i=0;i<8;i++)
        {
            lat2[i]=str2[i+14];
        }
        lat2[8]='\0';
        printf("纬度 :%s度\n",lat2);
        fprintf(fw,"纬度 :%s度,",lat2);
        for(i=0;i<6;i++)
        {
            time2[i]=str2[i+7];
        }
        time2[6]='\0';
        printf("UTC时间:%c%c时%c%c分%c%c秒\n",time2[0],time2[1],time2[2],time2[3],time2[4],time2[5]);
        fprintf(fw,"UTC时间:%c%c时%c%c分%c%c秒,",time2[0],time2[1],time2[2],time2[3],time2[4],time2[5]);
        for(i=0;i<9;i++)
        {
            lon2[i]=str2[i+25];
        }
        lon2[9]='\0';
        printf("经度:%s度\n",lon2);
        fprintf(fw,"经度:%s度,",lon2);
        for(i=0;i<2;i++)
        {
            number[i]=str2[i+39];
        }
        number[2]='\0';
        printf("卫星数量:%s个\n",number);
        fprintf(fw,"卫星数量:%s个,",number);
        for(i=0;i<5;i++)
        {
            high[i]=str2[i+43];
        }
        high[4]='\0';
        printf("海拔高度:%s米\n",high);
        fprintf(fw,"海拔高度:%s米\n",high);
        
    }
    
    
    
    
    
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
