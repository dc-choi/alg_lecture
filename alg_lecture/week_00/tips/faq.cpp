/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   faq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donchoi <donchoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:12:31 by donchoi           #+#    #+#             */
/*   Updated: 2022/12/30 18:43:10 by donchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

// 자주 묻는 질문
int main() {
	/**
	 * 1. 삼성에서는 bits/stdc++.h를 사용할 수 있나요?
	 * 21년까지는 사용 못했는데 22년 기준으로 사용이 된다고 함.
	 * 삼성전자 SW 역량테스트 A형을 보면 라이브러리 제한이 없어짐.
	 * 
	 * 다만, 21년 기준으로 돌아갈 수 있어서 추가 설명을 하자면,
	 * 라이브러리마다 제공되는 함수가 있고 내가 만든 로직에 어떤 함수가 들어간다면
	 * 해당 라이브러리에서 제공하는지를 알아야 합니다.
	 * 
	 * 다만, 라이브러리를 외우는걸 추천하지는 않고 함수가 제한이 걸리면 그냥 같은 기능을 하는 다른 함수를 사용하는걸 권장함.
	 * 그러나 불안한 사람들을 위해서 따로 라이브러리에 필요한 함수를 정리해주심.
	 * 
	 * 1) iostream
	 * swap
	 * getline
	 * clear
	 * fill
	 * tie
	 * precision
	 * sync_with_stdio
	 * cin
	 * cout
	 * stdio.h의 함수들
	 * printf
	 * scanf
	 * puts
	 * 
	 * 2) string.h
	 * memcpy
	 * memset
	 * size_t
	 * 
	 * 3) algorithm
	 * find
	 * swap
	 * fill
	 * remove
	 * unique
	 * rotate
	 * shuffle
	 * sort
	 * stable_sort
	 * lower_bound
	 * upper_bound
	 * min
	 * max
	 * min_element
	 * max_element
	 * next_permutation
	 * prev_permutation
	*/

	/**
	 * 2. 붙어있는 입력값을 어떻게 입력받죠?
	 * 
	 * 1) string으로 변환
	 * 첫번째는 string으로 받아 변환하는 방법임.
	 * cin으로 받을 때는 개행문자까지 받을 수 있다는 것을 기억하자.
	*/
	// 문자열 s를 받아 문자열을 문자로 분해해서 타입 변환을 통해 숫자를 int형 배열에 넣습니다.
	int n, m, a[10][10];
	string s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) a[i][j] = s[j] - '0';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << a[i][j];
		cout << '\n';
	}
	/*
	4 4
	1000
	0000
	0111
	0000
	1000
	0000
	0111
	0000
	*/

	/**
	 * 2) scanf로 받기
	 * 앞에 1을 붙이면 한자리의 int만을 받겠다라는 뜻이 되어 받을 수 있습니다.
	 * 0과 1은 int고 한자리씩 받으면 되니 이렇게 받을 수 있는 셈
	 * 
	 * 그러나 scanf는 char를 입력할 때는 좀 주의해야 합니다.
	 * 다음 코드처럼 띄어쓰기를 %c앞에 넣어서 입력을 받아야 합니다.
	 * scanf(" %c", &a[i][j]);
	 * 
	 * 숫자인 d로 입력을 받게 되면 이런 현상이 일어나지 않지만
	 * 문자인 c로 입력을 받게되면 특수문자, 엔터를 문자로 취급해서 입력을 받음.
	 * 그래서 이 부분에서 신경을 써줘야 함.
	 * 웬만하면 cin, cout로 입출력을 하는걸 추천함.
	*/
	int n2, m2, a2[10][10]
	cin >> n2 >> m2;
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) scanf("%1d", &a[i][j]); 
	}

	// 문자열을 입력받고 출력하는 코드
	char c[10][10];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) scanf(" %c", &c[i][j]);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) printf("%c", c[i][j]);
		printf("\n");
	}
	/*
	LLMM
	MMLL

	LLMM
	MMLL
	*/

	/**
	 * 3. 문제에서 입력을 끝을 정하지 않은 경우
	 * 보통의 문제는 n번까지 입력을 받는다. 이런게 일반적이지만 변칙적으로 문제가 나옴.
	 * 입력을 주다가 안줄 때 끝난다고 명시됨. 그럴 땐 아래와 같이 코드를 구축하면 됨.
	*/
	// while (scanf("%d", &n) != EOF)
	// while (cin >> n) // cin으로는 이렇게 하면 됩니다

	/**
	 * 예시
	 * 1) while (scanf("%d", &n) != EOF) cout << 1 << '\n';
	 * 
	 * 2) while (cin >> n) cout << 1 << '\n';
	*/

	/**
	 * 4. process exit call이란?
	 * 프로그램이 실행이 되면 메모리에 올라가 프로세스가 됨. 이 프로세스를 종료시킨다는 의미임.
	 * stdlib.h를 보면 다음과 깉이 설명되어있음.
	 * 
	 * #define EXIT_SUCCESS 0
	 * #define EXIT_FAILURE 1
	 * 
	 * 즉, 0은 성공적으로 종료했다를 의미하고 1은 실패적으로 종료했다를 의미함.
	 * 그래서 main()의 마지막에 return 0으로 프로세스를 성공적으로 종료한다는 코드를 씀.
	 * 이러한 것을 main 함수가 아닌 다른 함수에서도 강제적으로 선언할 수 있음.
	 * exit(0); 을 통해서 강제적으로 main함수를 종료할 수 있는 것.
	*/

	return 0;
}