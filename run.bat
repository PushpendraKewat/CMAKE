@echo off

echo Running MyApp...

build\MyApp.exe

if errorlevel 1 (
    echo Application failed!
    exit /b 1
)