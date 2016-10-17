@echo off

del /s /q *.save
del /s /q %cd%\C++\*.exe
del /s /q *.o

echo 清理完成！

pause