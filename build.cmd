@echo off
gcc o.c -o o.o
go build w.go
rustc d.rs
bf !3.bf !3.exe