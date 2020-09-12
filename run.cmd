@echo off
rem builds the executables for the compiled langs
call build
py -3 h.py
node e.js
lua l1.lua
ruby l2.rb
rem runs the compiled executable for o1.c
o1
julia space.jl
rem runs the compiled executable for w.go
w
bash o2.bash
perl r.pl
php l3.php
rem runs the compiled executable for d.rs
d
call !1.bat
tclsh !2.tcl
rem runs the compiled executable for !3.bf
!3
call .\bin\raku\raku newline.raku
rem deletes the compiled executables
del !3.exe d.exe d.pdb o1.exe w.exe
