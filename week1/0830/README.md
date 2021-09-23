# 2021년 8월 30일

# 유닉스 시스템 프로그래밍의 정의
- 유닉스에서 제공하는 시스템 호출을 사용해 프로그램을 작성하는 것을 의미

# 시스템 호출
- 유닉스 시스템이 제공하는 서비스를 이용해 프로그램을 작성할 수 있도록 제공되는 프로그래밍 기본 인터페이스
- 기본적인 형태는 c 언어의 함수 형태로 제공

# 라이브러리 함수
- 라이브러리: 미리 컴파일된 함수들을 묶어서 제공하는 특수한 형태의 파일
- 자주 사용하는 기능을 독립적으로 분리하여 구현해둠으로써 프로그램의 개발과 디버깅을 쉽게 컴파일을 좀 더 빠르게 할 수 있다.
- /lib, /url/lib에 위치하며 lib\*.a 또는lib\*.so 형태로 제공

# 시스템 호출과 라이브러리 함수의 비교
시스템 호출: 커널의 해당 서비스 모듈을 직접 호출하여 작업하고 결과를 리턴
라이브러리 함수: 일반적으로 커널 모듈을 직접 호출안함
![image (2)](https://user-images.githubusercontent.com/86128914/132170753-411a767e-dc28-4282-8de6-2bd616cac01b.png)

시스템 호출:man 페이지가 섹션 2에 속함
![image (3)](https://user-images.githubusercontent.com/86128914/132171239-0d48a27d-24a6-4a59-9649-3bfca46d6af6.png)
라이브러리 함수:man 페이지가 섹션 3에 속함
![image (4)](https://user-images.githubusercontent.com/86128914/132171293-b29bed6e-bbb9-41df-bfc9-d72e9a7bb043.png)

# 시스템 호출의 오류 처리 방법
- 성공하면 0을 리턴, 실패하면 -1을 리턴
- 전역변수 errno에 오류 코드 저장: man 페이지에서 코드값 확인 가능
![image (5)](https://user-images.githubusercontent.com/86128914/132171414-e60b4706-92a5-4cad-adcd-753435baf243.png)

# 라이브러리 함수의 오류 처리 방법
- 오류가 발생하면 NULL을 리턴, 함수의 리턴값이 int형이면 -1을 리턴
- errno 변수에 오류 코드 저장
![image](https://user-images.githubusercontent.com/86128914/132171683-9e957be2-4aca-46e0-b1ad-9590836d949e.png)

# UNIX 기본 명령

# 로그인/로그아웃
|명령|기능|주요 옵션|예제|
|----|----|----|----|
|telnet|유닉스 시스템에 접속| - |telnet hanb.co.kr|
|logout|유닉스시스템에 접속해제| - |logout|
|exit|유닉스 시스템에 접속해제| - |exit|

#프로세스 관련 명령
|명령|기능|주요 옵션|예제|
|----|----|----|----|
|ps|현재 실행 중인 프로세스의 정보를 출력|-ef: 모든 프로세스에 대한 상세 정보 출력|ps<br />ps -ef<br />ps -ef \| grep ftp|
|kill|프로세스 강제 종료|-9: 강제 종료|kill 5000<br />kill -9 5001|

#파일/디렉토리 조작 명령
|명령|기능|주요 옵션|예제|
|----|----|----|----|
|pwd|현재 디렉토리 경로 출력| - |pwd|i
|ls|디렉토리 내용 출력|-a: 숨김파일출력<br />-l: 파일 상세정보 출력|ls -a/tmp<br />ls -l|
|cd|현재 디렉토리 변경| - |cd /tmp<br />cd ~han01|
|cp|파일/디렉토리 복사|-r: 디렉토리 복사|cp a.txt b.txt<br />cp -r dir1 dir2|
|mv|파일/디렉토리 이름변경과 이동| - |mv a.txt b.txt<br / >mv a.txt dir1<br />mv dir1 dir2|
|rm|파일/디렉토리 삭제|-r: 디렉토리 삭제|rm a.txt<br />rm -r dir1|
|rmdir|빈 디렉토리 삭제| - |rmdir dir1|
|cat|파일 내용 출력| - | cat a.txt|
|more|파일 내용을 쪽 단위로 출력| - |more a.txt|
|chmod|파일 접근권한 변경| - |chmod 755 a.exe<br />chmod go+x axe|
|grep|패턴 검색| - |grep abcd a.txt|

#vi 편집기 내부 명령
|기능|명령|기능|명령|
|----|----|----|----|
|입력모드전환|i, a, o, O|명령모드전환|ESC|
|커서이동|j, k, h, l 또는 방향키|행이동|#G(50G, 143G 등)<br />:행번호|
|한글자수정|r|여러글자수정|#s(5s, 7s 등)|
|단어수정|cw|명령취소|u, U|
|검색하여수정|:%s/aaa/bbb/g|복사|#yy(5yy, 10yy 등)|
|붙이기|p|커서이후삭제|D(shift-d)|
|글자삭제|x, #x(3x, 5x 등)|행 삭제(잘라내기)|dd, #dd(3dd, 4dd 등)|
|저장하고 종료|:wq! 또는 ZZ|저장않고 종료|:q!|
|행 붙이기|J(shift-j)|화면다시표시|ctrl+l|
|행 번호 보이기|:set nu|행 번호 없애기|:set nonu|

#기타 명령
|명령|기능|주요 옵션|예제|
|----|----|----|----
|su|사용자 계정 변경|-: 변경할 사용자의 환경 초기화 파일 실행|su<br />su -<br /> su - han02|
|tar|파일/디렉토리 묶기|-cvf: tar파일 생성<br />-txf: tar파일 내용 보기<br />-xvf: tar파일 풀기|tar cvf a.tar * <br />tar tvf a.tar<br />tar xvf a.tar|
|whereis|파일 위치 검색| - |whereis ls|
|which|파일 위치 검색| - |which telnet|

#컴파일이란
- 텍스트로 작성한 프로그램을 시스템이 이해할 수 있는 기계어로 변환하는 과정
- 보통 컴파일 과정과 라이브러리 링크 과정을 묶어서 수행하는 것을 의미

예시
![image](https://user-images.githubusercontent.com/86128914/132169588-1d1453d9-f737-4731-a45a-ff71caa57945.png)

# GNU C 컴파일러: gcc
- c컴파일러 사용
![image (1)](https://user-images.githubusercontent.com/86128914/132169973-559d37fe-bd35-4352-bd6b-cb0ec2fd8ad5.png)
