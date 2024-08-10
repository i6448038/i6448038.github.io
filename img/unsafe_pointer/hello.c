
#include "stdio.h"



void main()
{
	char c = 'b';
	int i = 1000;
	char *cp;
	int *ip;
	
	//指针的正常赋值
	cp = &c;
	ip = &i;

	printf("cp[%p]\n", cp);
    printf("ip[%p]\n", ip);


    //指针的计算
    cp = cp + 1;
    ip = ip + 1;
    
    printf("cp[%p]\n", cp);
    printf("ip[%p]\n", ip);

    //不同"类型"指针之间的赋值
    cp = ip;

    printf("cp[%p] ip[%p]\n", cp, ip);


    //不同指针之间的比较
    if (cp == ip) {
    	printf("true\n");
    } else {
    	printf("false\n");
    }
}