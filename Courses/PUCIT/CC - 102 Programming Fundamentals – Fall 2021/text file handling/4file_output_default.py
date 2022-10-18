from os import system

def main():
	# before execution copy data 
	# from numbers2bkup.txt to numbers2.txt
	system("copy numbers2bkup.txt numbers2.txt > nul");
	
	numfile = "numbers2.txt";
	
	# later replace "w" with "a" and experiment
	#ofile = open(numfile, "w+"); 
	ofile = open(numfile, "a"); 
	ofile.write("The end")
	ofile.close()

	return

main()