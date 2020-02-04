# Rush01

## 전역변수
> - `int` g_size : 4, 맵의 한 변의 크기
> - `int` g_map_count : 결과 개수
> - `int` **g_row_restriction : `n`행의 좌[0][`n`], 우[1][`n`]에서 본 건물 개수 저장 (input)
> - `int` **g_col_restriction : `n`행의 상[0][`n`], 하[1][`n`]에서 본 건물 개수 저장 (input)
## 예상질문
> - row와 col 인풋을 왜 배열 하나로 관리하지 않고 2개로 나눠서 하느냐?
> - - 개발할 때 가독성 측면 등 편의를 고려하여 row와 col로 나누었다. 인덱싱 또한 0 ~ 3으로 통일하고 싶었다
> - g_size는 왜 선언했는가? 어차피 값이 4면 굳이 쓸 필요없징 않느냐?
> - - 소스 재활용 및 확장성 등을 고려하여 전역변수로 지정했다. 기존 방식보다는 유지 보수 등이 수월하다고
판단했다.
> - g_map_cnt를 굳이 전역변수로 둔 이유?
> - - 1) 매개변수 4개 제한, 2) 여러 함수에서 쓰는데 인자로 던져주기 애매함. 3) 함수들 사이에서 이어지는 변수가 아님. 4) 소스 개발 과정에서 메인 함수에서 출력된 결과 값의 개수를 확인해야 하는데 개발 과정에서 간편하게 확인할 수 있음
## main.c

## `int ` is_valid_input(`char` *input)
```c
	init_restriction_array();
	if (input[31] != '\0')
		return (0);
	input[31] = ' ';
	if (!set_restriction_array(input))
		return (0);
	if (!is_valid_number())
		return (0);
	return (1);
```

### 인자 및 변수
> - 함수들 `ft_process_input.c` 참고
### 기능 및 반환
> - `init_restriction_array`함수로 시선 배열 선언 및 공간 할당
> - 입력받은 문자열의 크기가 정해진 것보다 크면 `return (0)`;
> - `set_restriction_array`로 입력값을 init한 배열에 저장
> - 저장하는 과정에서 공백값에 다른 것이 있으면 `return (0)`;
> - `is_valid_number`로 1 ~ 4 값이 저장됐는지 확인
> - 아니면 `return(0)`
### 예상 질문
> - 31번째 공백으로 바꿔주는 이유
> - - 문자가 총 31개가 오는데, 31번째가 null이여야 옳은 입력값이기 때문
> - - set_restriction_array에서 공백을 판별할 때, 규칙성을 살리기 위해
> - if문들 순서
> - - free를 is_valid_input이 끝날 때 실행하므로, 무조건 할당을 해야한다
## `void `	free_map_array(`int` **map_arr)
```c
	int i;

	i = 0;
	while (i < g_size)
	{
		free(map_arr[i]);
		i++;
	}
	free(map_arr);
```

### 인자 및 변수
> - `i` : 탐색할 배열 index 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
### 기능 및 반환
> - 2차원 배열인 `map_arr`의 할당된 공간 free
### 예상 질문

## `void `	free_restriction_array(`void`)
```c
	int i;

	i = 0;
	while (i < 2)
	{
		free(g_row_restriction[i]);
		free(g_col_restriction[i]);
		i++;
	}
	free(g_col_restriction);
	free(g_row_restriction);
```


### 인자 및 변수
> - `i` : 탐색할 배열 index 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
### 기능 및 반환
> - 전역 2차원 배열인 `g_row_restriction`과 `g_col_restriction`의 할당된 공간 free

## `int ` main(`int` argc, `char const` *argv[])
```c
	int **map_arr;

	if (argc == 2)
	{
		if (!is_valid_input(argv[1]))
		{
			write(1, "Error\n", 6);
		}
		else
		{
			map_arr = get_map_array();
			dfs(map_arr, 0, 0);
			if (!g_map_cnt)
				write(1, "Error\n", 6);
			free_map_array(map_arr);
		}
		free_restriction_array();
	}
	else
		write(1, "Error\n", 6);
	return (0);
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `main.c`에 없는 함수는 `ft_process_input`참고
### 기능 및 반환
> - 입력값의 유무를 확인
> - `is_valid_input`을 통해 입력받은 문자열 및 restriction 배열의 모든 것(선언, 할당, 예외처리등)을 실행
> - 예외처리 결과를 통한 `Error`출력
> - 문제가 없을 경우, 정답이 담길 `map_arr`에 공간을 할당
> - `dfs`함수를 0행 0열(0, 0)에서 실행(`ft_backtracking.c` 참고)
> - 공간이 할당되지 않았을 때는 free가 발동되지 않게 적절한 위치에서 free실행
### 예상 질문
> - argc == 2 이유
> - - 배열 0에는 a.out, 배열 1에는 입력값이므로,

## ft_process_input.c

## `int `		is_valid_number(`void`)
```c
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < g_size)
		{
			if (!(1 <= g_row_restriction[i][j]
			&& g_row_restriction[i][j] <= g_size))
				return (0);
			if (!(1 <= g_col_restriction[i][j]
			&& g_col_restriction[i][j] <= g_size))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
```
### 인자 및 변수
> - `i`, `j` : 탐색할 2차원 배열 index 변수들
### 기능 및 반환
> - 1 ~ 4의 값이 restriction의 값이 아니라면 `return (0)`
### 예상 질문
> - g_size를 쓴 이유
> - - 호환성
## `int `	set_restriction_array(`char` *input)
```c
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			g_col_restriction[0][i / 2] = (int)(input[i] - '0');
			g_col_restriction[1][i / 2] = (int)(input[i + 8] - '0');
			g_row_restriction[0][i / 2] = (int)(input[i + 16] - '0');
			g_row_restriction[1][i / 2] = (int)(input[i + 24] - '0');
		}
		else
		{
			if (input[i] != ' ' || input[i + 8] != ' '
			|| input[i + 16] != ' ' || input[i + 24] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
```

### 인자 및 변수
> - `i` : 탐색할 배열 index 변수
> - `*input` : 표준 입력 받은 시선값 문자열
### 기능 및 반환
> - `i`가 짝수일 경우, 해당하는 시선에 0 + `i`, 8 + `i`, 16 + `i`, 24 + `i`를 입력
> - `i`가 홀수일 경우, 공백이 오지 않으면 예외처리(`return (0)`)
### 예상 질문
> - 8씩 증가해서 값을 초기화하는 이유
> - - 문자열 개수가 32개이며, 총 4개의 배열에 공백을 제외하고 4문자씩 넣어야하는데 일일이 구분할 경우
코드가 장황해지기 때문에 인덱스 변수 하나를 통해 4 종류의 숫자를 4개의 배열에 넣어주기 위함.
> - 강제 형변환 이유
> - - 사실 자동 형 변환이 되긴하지만, 확실히 우리가 char를 int로 변환했음을 명시하기 위해 한 것이다.
> - 0을 빼주는 이유?
> - - char를 int로 형변환 하기 위함
> - 왜 홀수번 자링레서 공백이 아닐 때 에러인 0을 리턴하는가?
> - - 문자열이 "1 2 3 ..." 등 홀수자리에는 무조건 공백이 오기 때문이다.
## `void `	init_restriction_array(`void`)
```c
	int i;

	i = 0;
	g_row_restriction = (int **)malloc(sizeof(int *) * 2);
	g_col_restriction = (int **)malloc(sizeof(int *) * 2);
	while (i < 2)
	{
		g_row_restriction[i] = (int *)malloc(sizeof(int) * g_size);
		g_col_restriction[i] = (int *)malloc(sizeof(int) * g_size);
		i++;
	}
```

### 인자 및 변수
> - `i` : 탐색할 배열 index 변수
### 기능 및 반환
> - 전역 배열 `g_row_restriction`과 `g_col_resctriction`에 공간을 할당
### 예상 질문
> - allocate를 Error일때도 하는가?
> - - 메모리 할당 선언의 위치가 달라지면 프리 함수를 그 때 그때 필요할때마다 매번 사용을 해줘야하는데
위와같이 처음부터 얼로케이트를 해주면 메인함수에서 마지막에 한번만 프리를 해줌으로써 코드 및 구조를
## int		**get_map_array(void)
```c
	int **map_arr;
	int i;
	int j;

	i = 0;
	map_arr = (int **)malloc(sizeof(int *) * g_size);
	while (i < 4)
	{
		map_arr[i] = (int *)malloc(sizeof(int) * g_size);
		j = 0;
		while (j < 4)
		{
			map_arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map_arr);
```
### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `i`, `j` : 탐색할 2차원 배열 index 변수들
### 기능 및 반환
> - 배열 `map_arr`에 공간을 할당
> - 배열의 값을 모두 0으로 초기화
### 예상 질문
> - 0으로 초기화 한 이유?
> - - 테스트 케이스 실험 중에 쓰레기 값이면 알아보기 힘드니까, 선언 한 배열은 초기화 해주는게 바람직하다
> - allocate를 Error일 때도 하는가?
> - - 겟맵어레이를 할당한다는 것은 인풋값에 에러가 없기 때문에 무조건 할당을 해야한다

## ft_backtracking.c

## `void `print_map(`int` **map_arr)
```c
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size - 1)
		{
			c = map_arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = map_arr[i][j] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
	g_map_cnt += 1;
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `c` : 출력할 값이 담길 문자 변수
> - `i`, `j` : 탐색할 2차원 배열 index 변수들
### 기능 및 반환
> - `4 * 4` 2차원 배열 `map_arr`의 값을 모두 출력
> - 전역변수 `g_map_cnt`(답의 개수)의 값 1 증가
### 예상 질문
> - g_size - 1까지 반복하는 이유
> - - 출력값이 공백으로 나누어지는데 마지막 문자는 공백이 따라오지 않기 때문에, 앞의 3개만 공백과 함께 출력해주고 마지막은 별도로 처리해주기 위함이다

## `void `	dfs(`int` **map_arr, `int` row, `int` col)
```c
	if (g_map_cnt == 1)
		return ;
	if (row == 3 && col == 4)
	{
		if (check_row_exception(map_arr, row))
			print_map(map_arr);
	}
	else if (row != 3 && col == 4)
		dfs(map_arr, row + 1, 0);
	else
		check_required_conditions(map_arr, row, col);
	}
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row`, `col` : 검사할 값의 좌표

### 기능 및 반환
> - `row`, `col`은 0, 0으로 주어짐, 행 -> 열 순으로 탐색
> - 재귀 탈출 : 이미 결과값을 출력함 (문제의 조건은 처음 알아낸 값 1개만 출력)
> - 재귀 탈출 : `row`, `col`을 이용해 마지막까지 도달했음을 알아냄(16번째 값) (`col` == 4)
> - - `col` == 4인 이유 : 3을 처리한 후 4를 대입하여 재귀를 호출하기 때문
> - - `check_row_exception`를 통해 마지막 행까지 이상이 없음을 확인하면 결과값 출력
> - `row`, `col`을 이용해 16번째 탈출 경우를 제외하고, 행의 마지막까지 도달했음을
> 알아냄 `재귀 호출` -> 인자의 `row`, `col`을 다음 행과 첫 열로 호출(다음 값)
> 행을 한 개 늘려 `재귀 호출` (`row` + 1)
> - `check_required_conditions`을 통해 값 대입 및 `재귀 호출`
### 예상 질문
> - col == 4를 쓴 이유
> - - 1) check_exception 함수와의 코드 통일성, 2) col == 4라면 0~3인덱스를 다 채웠다는 의미로
개행할 타임이 되었다는 것을 함수에게 명시하기 위함
> - - 재귀탈출 위 참조. 무조건 1개만 프린트. 재귀 함수 탈출 조건은 앞 쪽에 명시하기 위해서
> - if문 순서 이유
> - - 함수가 종료될 조건들을 앞에다가 배치해주었다.
> - g_map_cnt == 1일 때 리턴하는 이유?
> - - 정답 1개만 출력하고 바로 함수 종료시키기 위함.
> - 왜 또 dfs 함수에서 로우 조건을 체크하는가?
> - - row가 3일때에는 열체크만 해서, 행 체크는 총 3번밖에 되어있지 않기 때문에, 4*4 배열이 완성된 시점에
마무리로 행 검사가 필요하다. 때문에 구조적으로 dfs 함수의 조건문 속에 위치시켰다.

## `void `	check_required_conditions(`int` **map_arr, `int` row, `int` col)
```c
	int box_size;

	box_size = 1;
	while (box_size <= g_size)
	{
		map_arr[row][col] = box_size;
		if (is_possible_row(map_arr, row, col)
		&& is_possible_col(map_arr, row, col))
		{
			if (row == 3)
			{
				if (check_col_exception(map_arr, col))
					dfs(map_arr, row, col + 1);
			}
			else if (col == 3)
			{
				if (check_row_exception(map_arr, row))
					dfs(map_arr, row, col + 1);
			}
			else
				dfs(map_arr, row, col + 1);
		}
		box_size++;
	}
```

### 인자 및 변수
> - `box_size` : map의 한 칸에 들어갈 상자의 크기
> - `row`, `col` : 검사할 값의 좌표
### 기능 및 반환
> - 재귀 1 : 현재 좌표에 i 값을 초기화 (i를 1에서 4까지 반복)
> - 재귀 2 : `is_possible_row`와 `is_possible_col`을 통해 넣은 값이 가능한지 판별
> - 재귀 3 : 2가 가능하다면, 마지막 행일 때 `check_col_exception`을 통해 (마지막 행이므로)
> 완성된 열의 위, 아래에서 보이는 건물의 수가 입력된 값과 일치하는지 확인, 일치하면 `재귀 호출` -> 다음 열(다음 값)
> - 재귀 4 : 2가 가능하고 3이 불가능하면, 마지막 열일 때 `check_row_exception`을 통해 (마지막 행이므로)
> 완성된 열의 좌, 우에서 보이는 건물의 수가 입력된 값과 일치하는지 확인, 일치하면 `재귀 호출` -> 다음 행(col + 1)
> - 재귀 5 : 2가 가능하고 3과 4가 불가능하면, `재귀 호출` -> 다음 열(다음 값)
### 예상 질문
> - 이 함수를 dfs에서 쪼갠 이유
> - - 1) 디버깅 측면의 장점과, 탈출 조건(행 변경 이외)과의 분리를 위해 로직이 복잡한 dfs함수를 간결하게 기능별로 유지하기 위해
> - 변수가 왜 box size냐?
> - - 과제 설명에 보면 box라고 명시되어 있었기 때문이다 2) 단순히 인덱싱만 하는 변수가 아니라 값을 대입할 때도 쓰며, 그 값을 의미하는 이름이기 때문이다.
## ft_verify_location.c

## `int ` is_possible_row(`int` **map_arr,  `int` row, `int` col)
```c
	int i;

	i = 0;
	while (i < col)
	{
		if (map_arr[row][i] == map_arr[row][col])
			return (0);
		i++;
	}
	return (1);
```
### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row`, `col` : 검사할 값의 좌표
> - `i` : 탐색할 배열 index 변수
### 기능 및 반환
> - `col` 만큼 반복해(col 이후는 볼 필요가 없음) 소속된 행에 `row`, `col` 좌표의 값이 중복되는지 확인
> - 해당하면 `return (1)` 아니면 `return (0)`
### 예상 질문
> - col이후를 보지 않는 이유
> - - 해당 함수가 실행될 때는 (row, col) 까지의 값만 배정되어 있는 상태이기 때문에, 그 이후의 값은 비교의 의미가 없다.
> - 왜 row 와 col을 분리했는가?
> - - 기능적으로 보면 중복 검사라는 공통점이 있으나, 디버깅 용이성과 함수 명만 봤을 때 직관적으로
함수의 기능을 유추할 수 있어서.
## `int ` is_possible_col(`int` **map_arr,  `int` row, `int` col)
```c
	int i;

	i = 0;
	while (i < row)
	{
		if (map_arr[i][col] == map_arr[row][col])
			return (0);
		i++;
	}
	return (1);
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row`, `col` : 검사할 값의 좌표
> - `i` : 탐색할 배열 index 변수
### 기능 및 반환
> - `is_possible_row`함수와 로직은 같다. `row` 만큼 반복을 통한 열에서의 중복 탐색
### 예상 질문
> - row 이후를 보지 않는 이유
`int `	compare_restriction(`int` first, `int` last, `int` row, `int` col)
```c
	if (row >= 0)
	{
		if (first == g_row_restriction[0][row]
		&& last == g_row_restriction[1][row])
			return (1);
	}
	else
	{
		if (first == g_col_restriction[0][col]
		&& last == g_col_restriction[1][col])
			return (1);
	}
	return (0);
```

### 인자 및 변수
> - `first`, `last` : `check_row_exception`(아래)에서 알아낸 입력된 값의 박스 개수 시선값(좌, 우 or 상, 하)
> - `row`, `col` : 검사할 값의 좌표, 둘 중 하나는 -1로 입력되어, 행, 열 중 하나만 판별한다
> - `i` : 탐색할 배열 index 변수
### 기능 및 반환
> - 현재 값을 통해 알아낸 시선 값이 주어진 시선 값과 같은지 판별
> - 같은 경우 `return (1)`, 다를 경우 `return (0)`
### 예상 질문
> - 변수명 설정 이유
> - - 해당 함수는 컴퓨터가 dfs를 통해 도출해낸 각 방향에서 볼 수 있는 박스 사이즈와, 맨 처음 유저에게 입력받았던 restriction을 비교하는데, row와 col의 값 모두가 들어올 수 있기 때문에, 인덱스 번호 값이
시작하는 부분을 first, 끝나는 부분을 last로 했다.
> - -1으로 구현한 이유
> - - 분리할 만큼 복잡한 로직이 아닌 짧은 로직의 함수이기 때문에, -1을 사용하여 col 혹은 row 만 검사시키는 방법을 사용하여 코드를 재활용했다.
## `int `check_row_exception(`int` **map_arr, `int` row)
```c
	int i;
	int max_left;
	int max_right;
	int left_cnt;
	int right_cnt;

	right_cnt = 1;
	left_cnt = 1;
	i = 0;
	max_left = map_arr[row][0];
	max_right = map_arr[row][3];
	while (++i < 4)
	{
		if (map_arr[row][i] > max_left)
		{
			left_cnt++;
			max_left = map_arr[row][i];
		}
		if (map_arr[row][3 - i] > max_right)
		{
			right_cnt++;
			max_right = map_arr[row][3 - i];
		}
	}
	return (compare_restriction(left_cnt, right_cnt, row, -1));
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row` : 검사할 행 변수
> - `i` : 탐색할 배열 index 변수
> - `max_left` : 왼쪽부터 검사 중 행의 최대값을 갱신하는 변수
> - `max_right` : 오른쪽부터 검사 중 행의 최소값을 갱신하는 변수
> - `left_cnt` : 검사할 행의 왼쪽에서 보이는 건물의 개수
> - `right_cnt` : 검사할 행의 오른쪽에서 보이는 건물의 개수

### 기능 및 반환
> - `i`를 이용해 `row`행을 검사하는 반복문
> - 반복문을 통해 `i` = 1에서부터 `i` 와 3 - `i`까지 좌, 우에서 동시 탐색 (값 : [`row`][`i`], [`row`][3 - `i`])
> - 탐색 값이 `max_left`의 초기값은 [`row`][0], `max_right`의 초기값은 [row][3 - i]
> - 각각 `max_left`, `max_right`보다 큰 값을 탐색할 경우, `left_count`, `right_count` 각각 1 증가
> - 각각 `max_left`, `max_right`가 위의 경우일 때 이를 탐색 값으로 초기화
> - `compare_restriction`를 호출해 `left_count`와 `right_count`가 일치한다면
> `return (1)` 아니면 `return (0)`
### 예상 질문
> - ++i의 이유
> - - 로직상 비교를 전 값과 하는데, 무조건 첫 번째 박스는 max로 저장되어야 하기 때문. 따라서 i = 0을 생략하기 위해 전위연산을 했음
> - 3 - i의 이유
> - - row에서 볼 수 있는 박스의 개수를 좌우 양방향에서 동시에 검사하기 위함
> - 원리에 대해서 설명
> - - 무조건 첫 번째 박스는 보이기 때문에 그것을 max값으로 정해놓고, 반복문을 돌면서 그보다 큰 박스가 있다면, 볼 수 있는 박스의 개수가 증가하고, 기준값(max)이 더 큰 박스로 변하기 때문이다.
## `int `check_col_exception(`int` **map_arr, `int` col)
```c
	int i;
	int max_top;
	int max_bot;
	int top_cnt;
	int bot_cnt;

	top_cnt = 1;
	bot_cnt = 1;
	i = 0;
	max_top = map_arr[0][col];
	max_bot = map_arr[3][col];
	while (++i < 4)
	{
		if (map_arr[i][col] > max_top)
		{
			top_cnt++;
			max_top = map_arr[i][col];
		}
		if (map_arr[3 - i][col] > max_bot)
		{
			bot_cnt++;
			max_bot = map_arr[3 - i][col];
		}
	}
	return (compare_restriction(top_cnt, bot_cnt, -1, col));
```
### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row` : 검사할 행 변수
> - `i` : 탐색할 배열 index 변수
> - `max_left` : 왼쪽부터 검사 중 행의 최대값을 갱신하는 변수
> - `max_right` : 오른쪽부터 검사 중 행의 최소값을 갱신하는 변수
> - `left_cnt` : 검사할 행의 왼쪽에서 보이는 건물의 개수
> - `right_cnt` : 검사할 행의 오른쪽에서 보이는 건물의 개수

### 기능 및 반환
> - `check_row_exception`함수와 로직은 같다. 열에서의 시선 값 도출 및 판별
### 예상 질문
