@echo off
:again
test1003 > input.txt ;�����������
1003 < input.txt > outputa.txt
1003_1 < input.txt > outputb.txt
fc outputa.txt outputb.txt > nul ;�Ƚ��ļ�
if not errorlevel 1 goto again ;��ͬʱ����ѭ��
pause