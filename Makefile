compilar:
	g++ -w .\main.cpp '.\Gestion de Jugador\FArreglosJugador.cpp' -o ejecutable.exe
	./ejecutable.exe
limpiar:
	rm -r *exe