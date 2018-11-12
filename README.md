  

# 모두를 위한 리눅스 프로그래밍
![모두를 위한 리눅스 프로그래밍](http://image.kyobobook.co.kr/images/book/xlarge/408/x9791188621408.jpg)


**출판사** 제이펍  
**원서명** ふつうのLinuxプログラミング(第２版)  
(원서 ISBN: 9784797386479)  
**저자명** 아오키 미네로  
**역자명** 이동규  
**출판일** 2018년 11월 21일  
**페이지** 416쪽  
**ISBN**  979-11-88621-40-8(93000)  



[### 도서 소개 페이지 바로 가기 ###]()


## 원서(일본어) 지원 페이지
http://i.loveruby.net/stdlinux2/  

### 필요 환경

프로그램을 빌드하기 위해서는 Linux와 gcc, GNU make가 필요하다. 
다음 환경에서 동작을 확인했다. 

- Ubuntu Linux Desktop 16.04 LTS
- CentOS 7.3

### 빌드 방법

이 디렉토리 내에서 make 명령어로 프로그램을 빌드할 수 있다. 
또한, make text로 테스트할 수 있다. 

## 라이센스

이 디렉토리 내의 소스 코드는 전부 원저자(아오키 미네로)에게 저작권이 있으며, MIT라이센스를 따른다. 
즉, 아무런 제한 없이 변경, 재배포, 재사용이 가능하다. 
그러나 이 소스 코드를 활용함으로써 발생하는 문제에 대해서는 저자 및 출판사는 책임지지 않는다. 

아오키 미네로(青木峰郎) / Minero Aoki

## 소스 코드 목록

### 1장
<dl>
<dt>hello.c</dt>
<dd>Hello, World!</dd>

<dt>args.c</dt>
<dd>실행 인자를 표시하는 프로그램.</dd>

<dt>segv.c</dt>
<dd>NULL 포인터를 참조하는 프로그램.
확실히 segmentation fault가 발생함.</dd>

<dt>echo.c</dt>
<dd>간단한 echo 명령어.</dd>
</dl>

### 4장
<dl>
<dt>bell.c</dt>
<dd>단말에 벨을 울리는 프로그램.</dd>
</dl>

### 5장
<dl>
<dt>cat.c</dt>
<dd>간단한 cat 프로그램(시스템 콜 사용 구현).</dd>

<dt>cat0.c</dt>
<dd>cat.c에서 에러 처리를 제거한 코드.</dd>

<dt>cat3.c</dt>
<dd>문제 5-1의 해답.
실행 인자가 없을 때 stdin에서 읽는 cat 명령어.</dd>

<dt>wc-l-syscall.c</dt>
<dd>문제 5-2의 해답.
표준 입력에서 텍스트를 읽어, 그 줄 수를 표시.</dd>
</dl>

### 6장
<dl>
<dt>cat2.c</dt>
<dd>stdio을 사용하여 구현한 cat 명령어.</dd>

<dt>getcperf.c</dt>
<dd>fgetc와 getc의 속도를 비교하기 위한 코드. 
인자를 지정하지 않으면, getc를 쓰고, 인자로 f를 지정하면 fgetc를 사용한다.</dd>

<dt>feof-bug.c</dt>
<dd>feof를 사용할 때 발생하는 유명한 버그를 확인하는 코드.
이 프로그램에 표준 입력으로 텍스트 파일을 리다이렉트하면 마지막 줄이 두 번 표시된다.</dd>

<dt>cat-escape.c</dt>
<dd>문제 6-1의 해답.
탭을 \t, 개행을 $+ 개행으로 표시하는 cat 명령어.</dd>

<dt>wc-l-stdio.c</dt>
<dd>문제 6-2의 해답.
표준 입력에서 텍스트를 읽어, 그 줄 수를 표시.</dd>

<dt>cat5.c</dt>
<dd>문제 6-3의 해답.
fread와 fwrite를 사용한 cat 명령어.</dd>
</dl>

### 7장
<dl>
<dt>head.c</dt>
<dd>간단한 head 명령어.
stdin만을 읽는다.</dd>

<dt>head2.c</dt>
<dd>간단한 head 명령어.
실행 인자로 지정한 파일도 읽는다.</dd>

<dt>head3.c</dt>
<dd>간단한 head 명령어.
getopt로 실행 인자를 옵션으로 파싱하는 예</dd>

<dt>head4.c</dt>
<dd>간단한 head 명령어.
getopt_long을 사용하여 실행 인자를 옵션으로 파싱하는 예.</dd>

<dt>gdb/*</dt>
<dd>gdb 테스트를 위해 사용한 파일.</dd>

<dt>cat4.c</dt>
<dd>문제 7-1의 해답.
-e 옵션으로 cat-escape.c와 같은 효과를 내는 cat 명령어.</dd>

<dt>tail.c</dt>
<dd>문제 7-2의 해답.
간단한 tail 명령어(출력 줄 수 고정).</dd>
</dl>

### 8장
<dl>
<dt>grep.c</dt>
<dd>8장에서 작성한 grep 명령어.</dd>

<dt>array.c</dt>
<dd>문자열과 문자의 배열이 같은 것을 확인하는 코드.</dd>

<dt>wgrep.c</dt>
<dd>wchar을 사용하여 멀티 바이트 문자를 지원하는 grep 명령어.
고정 문자열만 검색할 수 있다.</dd>

<dt>grep2.c</dt>
<dd>문제 8-1의 해답.
-i 옵션과 -v 옵션이 붙은 grep 명령어.</dd>

<dt>slice.c</dt>
<dd>문제 8-2의 해답.
패턴에 일치하는 부분만 출력한다.
</dd>
</dl>

### 10장
<dl>
<dt>ls.c</dt>
<dd>간단한 ls 명령어.</dd>

<dt>catdir.c</dt>
<dd>opendir를 사용하지 않고 디렉터리를 읽는 명령어.
./catdir . | strings와 같이 실행하면 ls와 비슷하게 표시함.</dd>

<dt>mkdir.c</dt>
<dd>간단한 mkdir 명령어.
mkdir(2) 사용 예.</dd>

<dt>rmdir.c</dt>
<dd>간단한 rmdir 명령어.
rmdir(2) 사용 예.</dd>

<dt>ln.c</dt>
<dd>간단한 ln 명령어.
link(2) 사용 예.</dd>

<dt>symlink.c</dt>
<dd>간단한 ln -s 명령어.
symlink(2) 사용 예.</dd>

<dt>rm.c</dt>
<dd>간단한 rm 명령어.
unlink(2) 사용 예.</dd>

<dt>mv.c</dt>
<dd>간단한 mv 명령어.
rename(2) 사용 예.</dd>

<dt>stat.c</dt>
<dd>실행 인자로 지정한 파일의 메타 정보를 출력.
lstat(2) 사용 예.</dd>

<dt>touch.c</dt>
<dd>간단한 touch 명령어.
utime(2) 사용 예.
이 명령어는 시간을 갱신할 뿐, 파일을 만드는 기능은 없음.</dd>

<dt>chmod.c</dt>
<dd>간단한 chmod 명령어.
chmod(2) 사용 예.</dd>

<dt>chown.c</dt>
<dd>간단한 chown 명령어.
chown(2)와 getpwnam(3) 사용 예.</dd>

<dt>chgrp.c</dt>
<dd>간단한 chgrp 명령어.
chgrp(2) 사용 예.</dd>

<dt>traverse.c</dt>
<dd>문제 10-1의 해답.
실행 인자로 지정한 디렉토리를 traverse하면서, 안에 있는 파일을 출력.
</dd>

<dt>mkpath.c</dt>
<dd>문제 10-3의 해답.
디렉토리 트리를 재귀적으로 작성.
</dd>
</dl>

### 11장
<dl>
<dt>mapwrite.c</dt>
<dd>mmap(2) 테스트 프로그램.</dd>

<dt>shlib/*</dt>
<dd>공유 라이브러리를 작성하는 예(리눅스 only).</dd>

<dt>link/*</dt>
<dd>라이브러리의 다이나믹 링크와 다이나믹 로드의 예(리눅스 only).</dd>

<dt>tail.c</dt>
<dd>문제 11-1의 해답.
간단한 tail 명령어（출력 줄수를 실행 인자로 지정 가능）.</dd>
</dl>

### 12장
<dl>
<dt>exec.c</dt>
<dd>exec 테스트 코드.</dd>

<dt>spawn.c</dt>
<dd>실행 인자로 전달된 명령어를 실행.</dd>

<dt>dupread.c</dt>
<dd>dup(2) 테스트 프로그램.</dd>

<dt>sh1.c</dt>
<dd>문제 12-2의 해답.
간단한 셸.</dd>

<dt>sh2.c</dt>
<dd>문제 12-3의 해답.
파이프와 리다이렉트 기능을 구현한 셸.</dd>
</dl>

### 13장
<dl>
<dt>sig.c</dt>
<dd>signal(2) 테스트 프로그램. SIGINT만 지원.</dd>

<dt>sigqueue-test.c</dt>
<dd>시그널이 큐잉되는지 테스트하는 프로그램.
리눅스에서는 프로그램이 기동된 후 재빨리 Ctrl+C를 다섯 번 입력해도(즉, 시그널을 다섯 번 전송해도), 메시지는 두 번만 표시된다. 나머지 메시지는 분실된 것이다.</dd>

<dt>isatty.c</dt>
<dd>stdin, stdout, stderr에 대해 단말인지 여부 판정.</dd>

<dt>trap.c</dt>
<dd>문제 13-1 의 해답.
SIGINT(Ctrl+C로 인한 인터럽트)를 받으면 메시지를 출력.</dd>
</dl>

### 14장
<dl>
<dt>pwd.c</dt>
<dd>간단한 pwd 명령어.
버퍼의 크기는 정수 사용.</dd>

<dt>pwd2.c</dt>
<dd>간단한 pwd 명령어.
스스로 버퍼의 길이를 조절.</dd>

<dt>pwd3.c</dt>
<dd>간단한 pwd 명령어.
GNU libc의 getcwd() 기능 사용(리눅스 Only).</dd>

<dt>showenv.c</dt>
<dd>getenv(3) 테스트 프로그램.
실행 인자로 지정된 환경 변수의 값을 표시.
env.c도 참고할 것.</dd>

<dt>env.c</dt>
<dd>간단한 env 명령어.
모든 환경 변수를 표시.</dd>

<dt>user.c</dt>
<dd>실행 인자로 지정된 사용자의 사용자 ID를 표시.
getpwnam(3) 사용 예.</dd>

<dt>id.c</dt>
<dd>간단한 id 명령어.
user.c도 참고할 것.</dd>

<dt>timefmt.c</dt>
<dd>시간 API 테스트 프로그램.</dd>

<dt>strftime.c</dt>
<dd>strftime(3) 테스트 프로그램.</dd>

<dt>ls2.c</dt>
<dd>문제 14-3의 해답.
간단한 ls 명령어.
파일 소유자와 최종 변경 시간을 표시.</dd>
</dl>

### 15장
<dl>
<dt>daytime.c</dt>
<dd>daytime 클라이언트.</dd>

<dt>daytimed.c</dt>
<dd>daytime 서버.
책에 기술한 이유로 IPv4 전용.</dd>
</dl>

### 16장
<dl>
<dt>httpd.c</dt>
<dd>16장에서 만든 HTTP 서버.
stdin에서만 요청을 읽어 들인다.
</dd>
</dl>

### 17장
<dl>
<dt>httpd2.c</dt>
<dd>이번 장에서 작성한 HTTP 서버.
데몬화 기능과 소켓 접속 기능 추가.</dd>

<dt>logging.c</dt>
<dd>syslog(3) 테스트 프로그램.</dd>
</dl>

### 18장
<dl>
<dt>make/*</dt>
<dd>make와 Makefile의 예.</dd>
</dl>
