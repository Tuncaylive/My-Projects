@echo off
setlocal

REM Set the URL of the application on GitHub
set "https://github.com/Tuncaylive/My-Projects/releases/download/Releaseversion1.0.1/ConsoleApplication1.exe"

REM Set the path where you want to save the downloaded file
set "filename=ConsoleApplication1.exe"

REM Set the path where you want to start the application from
set "C:/Downloads=%cd%"

REM Download the file using PowerShell
powershell -Command "Invoke-WebRequest -Uri %url% -OutFile %filename%"

REM Check if the download was successful
if exist "%ConsoleApplication1.exe%" (
    echo Download successful.
) else (
    echo Download failed.
    exit /b 1
)

REM Start the application
start "" "%ConsoleApplication1.exe%"

endlocal
