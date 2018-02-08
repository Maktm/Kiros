if ($args.Length -lt 2) {
	Write-Host "Missing argument"
	exit
}

$scriptpath = $MyInvocation.MyCommand.Path
$dir = Split-Path $scriptpath
&cd $dir

mkdir -Force ..\vs\kiros\Generated\

$vcpkgRoot = $args[1]
&$vcpkgRoot\tools\qt5\uic.exe ..\..\ui\graphical_interface.ui > ..\vs\kiros\Generated\ui_graphical_interface.hpp
&$vcpkgRoot\tools\qt5\moc.exe ..\..\include\monitor\graphical_interface.hpp > ..\vs\kiros\Generated\moc_graphical_interface.cpp