all:
	rsync -r . robot:~/bot/
	ssh robot 'mkdir -p ~/bot/bin'
	ssh robot '(cd ~/bot && g++ -I./include src/main.cc -lpthread -lwiringPi -o bin/main)'

clean:
	ssh robot 'rm ~/bot/bin/*'

stop:
	ssh robot '(cd ~/bot && g++ -I./include src/stop.cc -lpthread -lwiringPi -o bin/stop)'
