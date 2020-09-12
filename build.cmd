@echo off
gcc o.c -o o.exe
go build w.go
rustc d.rs
./bin/bf !3.bf !3.exe