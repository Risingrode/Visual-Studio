//#include<stdio.h>

//int main()
//{//小数
	//float f = 12.123;
	//printf("%f", f);
	//return 0;
//简单++
	/*int a;
	int b;
	a = 7;
	b = ++a;
	printf("%d\n", b);
	return 0;*/
	//比大小
        /*int a;
		int b;
		a = 3;
		b = 4;
		if (a > b)
		{
			printf("%d\n", b);
		}
		else 
		{
			printf("%d\n", a);
		}*/
		//if语句 已完成 else后不加数        
			/*int a;
			scanf_s("%d", &a);

			if (a>10)
			{
				printf("不帅\n", a);
			}
			else
			{
				printf("长得帅\n", a);
			}
			return 0;*/
			//for循环
				/*int a;
				for (a = 0; a < 10; a++);
				printf("%d\n", a); */
				//法二 未完成
				/*int sum = 0;
				int i;
				for (i=1; i <= 10; i++);
				{
					sum += i;
				}
				printf("%d\n", sum);*/

				//while语句
					/*int a=1;
					while (a <=12345678) {
						a++;
					}
					printf("%d\n",a);*/
					//法二
					/*int sum = 0;
					int i = 1;
					while (i <= 10) {
						sum += i;
						i++;
					}*/
					//for与while与dowhile可以互相替换，for用的多。
					//dowhile循环
						/*int sum = 0;
						int i = 1;
						do {
							sum += i;
							i++;
						} while (i <= 10);
					//	printf("%d\n", sum);*/
					//%的知识点
				/*	以printf为前提
					%d十进制 %c字符 %s字符串 %f 可用于fioat和double且等同于%lf
						%x十六进制 %X %08x %08X
					以scanf为前提    %lf用于double
					 后跟地址    不加\n
				*/
				/*printf("%d%c\n", 65, 65);
				float a = 12.5f;
				double b = 23.4;
				printf("%f%f\n", a, b);
				printf("%lf%lf\n", a, b);
				printf("%x\n", 20);
				printf("%08X\n", 1234);

				scanf_s("%f", & a);
				printf("%f\n", a);*/
				//break与continue;
				//	break跳出一层循环
				 //   continue 用法
				//计算加  计算减不成功
					/*int a;
					int b;
					int c;
					scanf_s ("%d", &a);
					scanf_s ("%d", &b);
					c = a+b;

					printf ("%d\n", c);*/
					//输入分数  可以用两个if
						/*int a = -1;
						printf("请输入成绩：");
						scanf_s ("%d", &a);
						if (a >= 60) {
							printf("%d分及格\n", a);
						}
						if (a < 60) {
							printf("%d不及格\n", a);
						}*/
						//switch语法   可以用好多指令
							  /*int a ;
							  scanf_s("%d", &a);

							  switch (a)
							  {
							  case 1:
								  printf("我最帅\n",a);
								  break;
							  case 2:
								  printf("我不帅\n",a);
								  break;
							  }*/
							  //if适用于复杂结构  if与switch差不多
							  //goto语句能不用就不用  可以跳出循环
								 /* int i = 0;
								  step:
								  printf("帅\n");
								  i++;
								  if(3==i){
									  goto step1;
								  }
								  goto step;
								  step1:
								  printf("可以\n");*/



//}
