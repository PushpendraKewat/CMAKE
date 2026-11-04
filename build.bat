@echo off
cmake --build build -j 8

if errorlevel 1 exit /b 1

echo Build successful!