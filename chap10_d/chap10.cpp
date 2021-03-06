/*
 * 1 - 1
 * 배열 days[]를 아래와 같이 초기화하고 배열 원소의 값을 다음과 같이 출력하는 프로그램을 작성하라
 * 31,29,31,30,31,30,31,31,30,31,30,31
 * 1월은 31일까지 있습니다.
 * 2월은 29일까지 있습니다.
 * ...
 * 12월은 31일까지있습니다
 * */


/*
 * 2 - 6
 * 0부터 9까지의난수를 100번 생성하여 가장많이 생성된 수를 출력하는 프로그램을 작성하라
 * 난수는 rand()함수를 사용하여 생성하라
 * 통계학에서 최빈값(mode)이란 숫자들 중에서 가장많이 나타나는 숫자를 지칭한다.
 * */


/*
 * 3 - 9
 * 다음표의 각 행의 합계, 각 열의 합계를 구하는 프로그램을 작성하라.
 * 표는 2차원 배열을 이용하여 표현하라.
 * 12 56 32 16 98
 * 99 56 34 41 3
 * 65 3  87 78 21 
 * */

/*
 * 4 - 13
 * 2차원 행렬(matrix)에 대한 다음과 같은 함수를 작성하고 테스트하여 보라.
 * 행렬의 크기는 3 x 3으로 가정하라
 * 
 * (a) transpose(int a[][3], int b[][3])
 *
 * |1 2 3|^r |1 4 7|
 * |4 5 6| = |2 5 8|
 * |7 8 9|   |3 6 9|
 *
 * (b) mult(int a[][3], int b[][3], int c[][3])
 * (AB)_ij = sig(_k)A(_ik)B(_kj)
 * */


/*
 * 5 - 14
 * 학생들의 시험 점수를 통계처리하는 프로그램을 작성하여 보라.
 * 한 학급은 최대 10명까지의 학생들로이루어진다.
 * 각 학생들은 3번으 시험을 치른다.
 * 사용자로부터 값을 입력받을 수 있도록 하라.
 *
 *	  |---------------------------------------------|
 *	  |    학번	 |	시험#1	|	시험#2	|	시험#3	|
 *	  | 	1	 |	  30	|	  10  	|	  11	|
 *	  | 	2	 |	  40 	|	  90    |	  32	|
 *	  | 	3	 |	  70	|	  65	|	  56  	|
 *	  | 	4	 |	  70	|	  43	|	  32   	|
 *	  | 	5	 | 	  80	|	  10	|	  89   	|
 *	  |---------------------------------------------|
 *
 * (a) 각 시험마다 최대점수, 최저 점수, 평균 점수를 출력하도록 하라.
 * (b) 각 학생마다 최고, 최하, 평균 점수를 출력하도록 하라.
 * (c) 각 시험마다 산술 평균 값, 중간값, 모드값(최빈값)을 계산하여서 출력하여 보라.
 * 		중간값은 성적을 정렬시킨 후에 중간에 위치한 값이다.
 * 		모드값(최빈값)은 가장 자주 발생하는 점수를 의미한다.
 * (d) 각 학생별로 총점을 구하고 이 총점을 기준으로 정렬하여 보라. 본무에 등장하는 버브렁렬이나 선택정렬 함수를 사용하라.
 * *
 * /
