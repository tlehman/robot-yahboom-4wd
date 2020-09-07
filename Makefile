all:
	g++ -I./include src/main.cc -lpthread -lwiringPi -o bin/main 

clean:
	rm bin/*

stop:
	g++ -I./include src/stop.cc -lpthread -lwiringPi -o bin/stop
