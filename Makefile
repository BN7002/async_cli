
default:
	g++ cli.cpp other.cpp main.cpp -o cli_other
other:
	g++ other.cpp -o other
r:	clearsrc clean other cli
cli:
	g++ cli.cpp -o cli
clean:
	rm -f *.o
clearsrc:
	clear
