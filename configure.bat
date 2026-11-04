@echo off
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug

if errorlevel 1 exit /b 1

echo Configuration successful!