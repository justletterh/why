@echo off
gcc o1.c -o o1.exe
.\bin\go\bin\go build w.go
.\bin\rust\bin\rustc d.rs
.\bin\bf !3.bf !3.exe