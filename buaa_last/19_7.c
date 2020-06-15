#include<stdio.h>

int get_weekday(int year,int month,int day){
	int RUN_YEAR = 366;
	int NON_RUN_YEAR = 365;
	int sumDay = 0;
	//计算年转化成天
	for (int i = 1; i < year; ++i)
	{
		//是否是润年
		if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			sumDay += RUN_YEAR;
		}else{
			sumDay += NON_RUN_YEAR;
		}
	}
	//计算月转化成天
	for(int j = 1; j < month ; j++){
		if(j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 ){
			sumDay += 31;
		}else if( j == 2 ){
			if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
				sumDay += 29;
			}else{
				sumDay += 28;
			}
		}else{
			sumDay += 30;
		}
	}
	//计算天
	sumDay+= day ;
	printf("%d\n", sumDay);
	return sumDay%7;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", get_weekday(2019,12,12));
	
	return 0;
}