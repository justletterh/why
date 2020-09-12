@echo off
call build&&rem builds the executables for the compiled langs
py -3 h.py
node e.js
lua l1.lua
ruby l2.rb
o&&rem o.c
julia space.jl
w&&rem w.go
bash o2.bash
perl r.pl
php l3.php
d&&rem d.rs
call !1.bat
tclsh !2.tcl
!3&&rem !3.bf
del !3.exe d.exe d.pdb o.exe w.exe&&rem deletes the compiled executables
