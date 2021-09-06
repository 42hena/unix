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
