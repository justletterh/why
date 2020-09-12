@echo off
rem builds the executables for the compiled langs
call build
py -3 h.py
node e.js
lua l1.lua
ruby l2.rb
o&&rem o.c
julia space.jl
rem w.go
w
bash o2.bash
perl r.pl
php l3.php
rem d.rs
d
call !1.bat
tclsh !2.tcl
rem !3.bf
!3
rem deletes the compiled executables
del !3.exe d.exe d.pdb o.exe w.exe
