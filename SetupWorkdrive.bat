@echo off

cd /D "%~dp0"



IF exist "P:\HellLibrary" (
Rem	echo Removing existing link P:\HellLibrary
	rmdir "P:\HellLibrary"
)

Rem echo Creating link P:\HellLibrary
mklink /J "P:\HellLibrary\" "%cd%\HellLibrary\"

echo Done