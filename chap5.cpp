#include <stdio.h>
#include <math.h>

/*
	1 - 10.
	다음과 같은 수식의 값을 계산하는 프로그램을 작성하라
	x는 실수라고 사정하고 사용자가 입력할 수 있도록 하라
	(a) 7x^3-6x^2+9ax^2+bx+c
	(b) 2x^2-6x+1/(x+1)
*/
/*
void fomulaA(float x);
void fomulaB(float x);

int main() {
	float x = 0;
	char type = 0;

	puts("확인할 식의 타입을입력 ");
	puts("tyep A : 7 * x^3 - 6 * x^2 + 9 * a * x^2 + b * x + c");
	puts("tyep B : 2 * x^2 -6 * x + 1 / (x+1)");
	scanf("%c", &type);

	puts("실수 입력");
	scanf("%f",&x);

	switch (type)
	{
		case 'a':
			fomulaA(x);
			break;
		case 'b':
			fomulaB(x);
			break;
		default:
			break;
	}

}

void fomulaA(float x) {
	//7 * x*x*x - 6 * x*x + b*x + c;
	printf("타입 A : %.2f - %.2f + %.2fb + c \n", 7 * x*x*x,6 * x*x,x);

	return;
}

void fomulaB(float x) {
	//2 * x*x - 6 * x + 1 / (x + 1);
	printf("타입 B : %.2f \n", 2 * x*x - 6 * x + 1 / (x + 1));
		
	return;
}
*/
/*	
	2 - 12.
	2년간의 이자를 계산하는 프로그램을 작성하여 보자
	사용자로부터 예금액, 연이율을 입력받아서 이자를 계산한다.
	이자는 복리로 계산된다고 가정하라.
	즉 첫해의 이자는 예금액에 이율을 곱하면 되지만 
	둘째해의 이자는 예금액과 첫해의 이자를 더한 액수에 이율을 곱하여야 한다.

	* 예금액을 입력하시오 : 1000
	* 연이율을 입력하시오.(단위퍼센트) : 5.0
	* 2년후의 예금액은 1102.5 입니다.

*/
	
/*
void interest_sub (float save_money, float interest100, float eja, int year);

int main(){
	
	int save_money = 0, year = 0; // 예금액, suseh
	float interest100 = 0, interest = 0;
	float eja = 0, result = 0;
	// 첫해의 이자 : (예금액 + 0) * 이율(퍼센트:x/100)
	// 둘째해의 이자 : (예금액 + 첫해 이자) * 이자율(x/100)

	puts("예금액을입력하시오");
	scanf("%d", &save_money);
	puts("연이율을 입력하시오.");
	scanf("%f", &interest);
	puts("계산할 년도를 입력하시오.");
	scanf("%d",&year);

	interest100  = interest / 100;
	
	interest_sub(save_money, interest100, eja, year);

	return 0;
}


void interest_sub (float save_money, float interest100, float eja, int year){

	float result_money=save_money;

	for(int i=0; i<year; i++)
	{
		eja = (save_money+eja) * interest100;
		result_money +=  eja;  

		printf("이자 결과 : %.2f\n",eja);
		printf("입금 결과 : %.2f\n", result_money);
	}

	return;
}
*/

/*
	3 - 14.
	정수(i)를 다른 정수(m)의 배수로 올림하는 프로그램을 작성하라
	예를 들어서 123을 10의 배수로 올림하면 123보다 큰 10의 배수 중에서 가장 가까운 것은 130이될 것이다.
	이것은 다음과 같은 식을 이용하여 구할 수 있다.
	다음 배수 = i+m-(i%m)
	사용자로부터 i와 m의 값을 입력받아서 가장 가까운 다음 배수를 구하느 프로그램을 작성하여 보라.
	여러가지 값을 입력하여 테스트하여 보라
*/

/*
int main(){

	int i,m=0;
	int iuptom =0; 

	puts("한개의 정수를 입력하시오");
	scanf("%d",&i);

	puts("올림하고자하는 정수를 입력하시오");
	scanf("%d",&m);

	iuptom = i+m-(i%m);

	printf("i : %d m : %d \n",i,m);
	printf("result : %d \n",iuptom);

	return 0;
}
*/

/*
	4 - 15.
	구의 표면적과 궤적을 구하는 프로그램을 작성하라.
	구의 반지름은 실수로 입력된다.
	아래의 공식을 사용하라
	A = 4pr^2
	V = (4pr^2)/3
*/

/*
#define PI 3.14

int main(){

	float shape_r, shape_a, shape_v;
	
	puts("구의 반지금을 입력하시오");
	scanf("%f",&shape_r);

	shape_a = 4.*PI*shape_r*shape_r;
	shape_v = shape_a*shpe_r/3;


	printf("구의 표면적 : %.2f 구의 궤적 : %.2f\n",shape_a,shape_v);
}
*/

/*
	5 - 19
	2차 방정식 ax^2+bx+c의 근을 구하는 프로그램을 작성하라.
	사용자로부터 정수 a,b,c의 값을 입력받고 제곱근은 sqrt()함수를 사용한다.
	다음과 같은 근의 공식을 이용하라 판별식인 b^2-4ac는 양수라고 가정하자.
	x = (-b+(b^2-4ac)^1/2)2a
	x = (-b-(b^2-4ac)^1/2)2a
*/

int main()
{

	float equation_p = 0;
	float equation_m = 0;
	float distinction= 0, sq_distinction=0;
	int a, b, c=0; 
	
	puts("2차 방정식 근의 공식을 위한 3개의 정수를 입력하시오");
	scanf("%d %d %d",&a,&b,&c);

	distinction = b*b-4*a*c;

	if(distinction > 0){
		sq_distinction = sqrt(distinction);

		equation_p = (-b+sq_distinction)/(2*a);
		equation_m = (-b-sq_distinction)/(2*a);

		puts("두개의 서로 다른 실근을 갖습니다.");

		printf("+x : %.2f, -x : %.2f \n",equation_p,equation_m);
		printf("a,b,c : %d %d %d \n",a,b,c);
		printf("D : %.2f  \n",distinction);
		printf("sqrt D : %.2f  \n",	sq_distinction);

	} else if(distinction = 0){
		sq_distinction=sqrt(distinction);
		equation_p = (-b+sq_distinction)/2*a;
		
		puts("서로같은 실근(중근)을 갖습니다.");
		printf("+x : %.2f  \n",equation_p);
		printf("a,b,c : %d %d %d \n",a,b,c);
		printf("+x : %.2f  \n",distinction);

	} else {
		puts("허근을 갖습니다. 예제에서는 허근을 따로 다루지 않습니다.");
	}

	return 0;
}
