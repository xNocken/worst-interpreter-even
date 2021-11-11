rebuild:
	/usr/bin/g++ -g *.cpp -g src/*.cpp -o build/main

buildnrun:
	make -s rebuild
	./build/main
