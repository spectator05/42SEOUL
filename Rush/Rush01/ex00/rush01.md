# Rush01

## 전역변수
> - `int` g_size : 4, 맵의 한 변의 크기
> - `int` **g_row_restriction : `n`행의 좌[0][`n`], 우[1][`n`]에서 본 건물 개수 저장 (input)
> - `int` **g_col_restriction : `n`행의 상[0][`n`], 하[1][`n`]에서 본 건물 개수 저장 (input)
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
> - `map_arr` : 상자가 있는 맵, 정답을 저장하는 정수형 2차원 배열
>
> - `row`, `col` : 검사할 값의 좌표
> - `i` : 검사할 index(열) 변수   
### 기능 및 반환
> - `col` 만큼 반복해(col 이후는 볼 필요가 없음) 소속된 행에 `row`, `col` 좌표의 값이 중복되는지 확인
> - 해당하면 `return (1)` 아니면 `return (0)`
### 예상 질문

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
> - `row`, `col` : 행, 열 검사할 좌표
> - `i` : 검사할 index(행) 변수
### 기능 및 반환
> - `row` 만큼 반복해(row 이후는 볼 필요가 없음) 소속된 행에 `row`, `col` 좌표의 값이 중복되는지 확인
> - 해당하면 `return (1)` 아니면 `return (0)`
### 예상 질문

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
> - `i` : 검사할 index(행) 변수
> - `j` : 검사할 index(열) 변수
### 기능 및 반환
> - `4 * 4` 2차원 배열 `map_arr`의 값을 모두 출력
> - 전역변수 `count`(답의 개수)의 값 1 증가
### 예상 질문

## `int `check_row_exception(`int` **map_arr, `int` row)
```c
	int i;
	int max_left;
	int max_right;
	int left_count;
	int right_count;
	right_count = 1;
	left_count = 1;
	i = 1;
	max_left = map_arr[row][0];
	max_right = map_arr[row][3];
	while (i < 4)
	{
		if (map_arr[row][i] > max_left)
		{
			left_count++;
			max_left = map_arr[row][i];
		}
		if (map_arr[row][3 - i] > max_right)
		{
			right_count++;
			max_right = map_arr[row][3 - i];
		}
		i++;
	}
	if (left_count == g_row_restriction[0][row] && right_count == g_row_restriction[1][row])
		return (1);
	return (0);
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row` : 검사할 행 변수
> - `i` : 검사할 index(열) 변수
> - `max_left` : 왼쪽부터 검사 중 행의 최대값을 갱신하는 변수
> - `max_right` : 오른쪽부터 검사 중 행의 최소값을 갱신하는 변수
> - `left_count` : 검사할 행의 왼쪽에서 보이는 건물의 개수
> - `right_count` : 검사할 행의 오른쪽에서 보이는 건물의 개수

### 기능 및 반환
> - `i`를 이용해 `row`행을 검사하는 반복문
> - 반복문을 통해 `i` = 1에서부터 `i` 와 3 - `i`까지 좌, 우에서 동시 탐색 (값 : [`row`][`i`], [`row`][3 - `i`])
> - 탐색 값이 `max_left`의 초기값은 [`row`][0], `max_right`의 초기값은 [row][3 - i]
> - 각각 `max_left`, `max_right`보다 큰 값을 탐색할 경우, `left_count`, `right_count` 각각 1 증가
> - 각각 `max_left`, `max_right`가 위의 경우일 때 이를 탐색 값으로 초기화
> - `left_count`와 `right_count`가 일치한다면 `return (1)` 아니면 `return (0)`
### 예상 질문

## `int `check_col_exception(`int` **map_arr, `int` col)
```c
	int i;
	int max_top;
	int max_bottom;
	int top_count;
	int bottom_count;
	top_count = 1;
	bottom_count = 1;
	i = 1;
	max_top = map_arr[0][col];
	max_bottom = map_arr[3][col];
	while (i < 4)
	{
		if (map_arr[i][col] > max_top)
		{
			top_count++;
			max_top = map_arr[i][col];
		}
		if (map_arr[3 - i][col] > max_bottom)
		{
			bottom_count++;
			max_bottom = map_arr[3 - i][col];
		}
		i++;
	}
	if (top_count == g_col_restriction[0][col] && bottom_count == g_col_restriction[1][col])
		return (1);
	return (0);
```
> - row 반대


## `void `	dfs(`int` **map_arr, `int` row, `int` col)
```c
	int i;

	i = 1;
	if (row == 3 && col == 4)
	{
		print_map(map_arr);
	}
	else if (row != 3 && col == 4)
	{
		dfs(map_arr, row + 1, 0);
	}
	else
	{
		while (i <= 4)
		{
			map_arr[row][col] = i;
			if (is_possible_row(map_arr, row, col) && is_possible_col(map_arr, row, col))
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
			i++;
		}
	}
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row`, `col` : 행, 열 검사할 좌표
> - `i` : 해당 좌표에 넣을 값(1 ~ 4)

### 기능 및 반환
> - `row`, `col`은 0, 0으로 주어짐, 행 -> 열 순으로 탐색
> - 재귀 탈출 : `row`, `col`을 이용해 마지막까지 도달했음을 알아냄(16번째 값)
> - 재귀 1 - 1 : `row`, `col`을 이용해 행의 마지막까지 도달했음을 알아냄 (`col` == 4)
> - - `col` == 4인 이유 : 3을 처리한 후 4를 대입하여 재귀를 호출하기 때문
> - 재귀 1 - 2 : `재귀 호출` -> 인자의 `row`, `col`을 다음 행과 첫 열로 호출(다음 값)
> - 재귀 2 - 1 : 현재 좌표에 i 값을 초기화 (i를 1에서 4까지 반복)
> - 재귀 2 - 2 : `is_possible_row`와 `is_possible_col`을 통해 넣은 값이 가능한지 판별
> - 재귀 2 - 3 : 2 - 2가 가능하다면, 마지막 행일 때 `check_col_exception`을 통해 (마지막 행이므로)   
> 완성된 열의 위, 아래에서 보이는 건물의 수가 입력된 값과 일치하는지 확인, 일치하면 `재귀 호출` -> 다음 열(다음 값)
> - 재귀 2 - 4 : 2 - 2가 가능하고 2 - 3이 불가능하면, 마지막 열일 때 `check_row_exception`을 통해 (마지막 행이므로)   
> 완성된 열의 좌, 우에서 보이는 건물의 수가 입력된 값과 일치하는지 확인, 일치하면 `재귀 호출` -> 다음 행(1 - 1로)
> - 재귀 2 - 5 : 2 - 2가 가능하고 2 - 3과 2 - 4가 불가능하면, `재귀 호출` -> 다음 열(다음 값)
### 예상 질문

## `int ` main(`int` argc, `char const` *argv[])
```c
	int **map_arr;
	int row;
	int col;
	row = 0;
	col = 0;
	//동적 할당 및 초기화 부분
	map_arr = (int **)malloc(sizeof(int *) * 4);
	while (row < 4)
	{
		map_arr[row] = (int *)malloc(sizeof(int) * 4);
		while (col < 4)
		{
			map_arr[row][col] = 0;
			col++;
		}
		row++;
	}
	//동적 할당 및 초기화 부분
	dfs(map_arr, 0, 0); //dfs 시작
	printf("count :: %d\n", count); //중복배제 4*4 스도쿠 : 576개
	return 0;
```

### 인자 및 변수
> - `map_arr` : 정답이 저장되는 정수형 2차원 배열
> - `row` :  index(행) 변수
> - `col` :  index(열) 변수
### 기능 및 반환
> - 표준 입력으로 argv[0][1]에 4 * 4사이즈 건물들 에서 각 행, 열에서 상, 하, 좌, 우에서 보이는 건물의 개수를 공백 기준으로 나누어 문자열로 입력
> - 초기값이 0인 `row`, `col`을 이용해 4 * 4 2차원 정수형 배열의 모든 값(건물 크기)을 0으로 초기화
> - `dfs`함수를 0행 0열(0, 0)에서 실행
### 예상 질문
