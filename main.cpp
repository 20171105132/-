//
//  main.cpp
//  haha
//
//  Created by zhangyue on 18/6/29.
//  Copyright © 2018年 zhangyue. All rights reserved.
//

#include <iostream>

/*int getMaxOrMin(int *arr,int count,bool isMax){
    int temp=arr[0];
    for(int i=1;i<count;i++){
        if(isMax){
            if(temp<arr[i]){
                temp=arr[i];
            }
        }else{
            if(temp>arr[i]){
                temp=arr[i];
            }
        }
    }
    return temp;
}*/
int main(int argc, const char * argv[])
{
    FILE *a;
    char s1[100];
    char s2[100];
    char s3[100];
    char s4[100];
    char s5[100];
    char s6[100];
    char s7[100];
    char s8[100];
    char s9[100];
    char s10[100];
    char s11[100];
    if ((a=fopen("/Users/s20171105132/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else
    {
        fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
        printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
    }
    return 0;
}
