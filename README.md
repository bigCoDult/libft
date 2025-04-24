# libft

**프로젝트 개요**
libft는 C 표준 라이브러리 함수들을 직접 구현하여 C 언어의 내부 동작을 학습하고, 다양한 프로젝트에 활용하기 위한 교육용 라이브러리입니다.

## 함수 분류 및 프로토타입

- **문자열 처리 (길이 측정 및 탐색)**
기본적인 문자열 길이, 복사, 연결, 검색 기능을 제공합니다.
```c
size_t ft_strlen( );
size_t ft_strlcpy( );
size_t ft_strlcat( );
char   *ft_strdup( );
char   *ft_strchr( );
char   *ft_strrchr( );
int     ft_strncmp( );
char   *ft_strnstr( );
```

- **문자 검사**
문자의 종류(알파벳, 숫자, ASCII 여부 등) 판별 함수들입니다.
```c
int ft_isalpha( );
int ft_isdigit( );
int ft_isalnum( );
int ft_isascii( );
int ft_isprint( );
```

- **메모리 관리**
메모리 초기화, 할당, 복사, 비교 등 메모리 블록 처리 함수 모음입니다.
```c
void   ft_bzero( );
void  *ft_calloc( );
void  *ft_memset( );
void  *ft_memcpy( );
void  *ft_memmove( );
void  *ft_memchr( );
int     ft_memcmp( );
```

- **출력 및 변환**
정수-문자열 변환 및 파일 디스크립터를 통한 출력, 포맷팅 기능을 제공합니다.
```c
char   *ft_itoa( );
void    ft_putchar_fd( );
void    ft_putstr_fd( );
void    ft_putendl_fd( );
void    ft_putnbr_fd( );
```

- **문자열 조작**
문자열 분할, 결합, 자르기, 매핑 등의 조작을 지원합니다.
```c
char   *ft_substr( );
char   *ft_strjoin( );
char   *ft_strtrim( );
char  **ft_split( );
void    ft_striteri( );
char   *ft_strmapi( );
```

- **연결 리스트**
단일 링크드 리스트의 생성, 삽입, 삭제, 순회, 매핑 등 리스트 관리 기능입니다.
```c
t_list *ft_lstnew( );
void    ft_lstadd_front( );
void    ft_lstadd_back( );
int     ft_lstsize( );
t_list *ft_lstlast( );
void    ft_lstiter( );
t_list *ft_lstmap( );
void    ft_lstdelone( );
void    ft_lstclear( );
```

## 라이센스
이 라이브러리는 **Beerware License (Revision 42)**를 따릅니다.

```
THE BEER-WARE LICENSE (Revision 42)
As long as you retain this notice you can do anything with this stuff.
If we meet some day, and you think this stuff is worth it, you can buy me a beer in return.
```
