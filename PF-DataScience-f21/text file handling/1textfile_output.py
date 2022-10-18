from random import randint

def main():
	numfile = "values.txt"
	ofile = open(numfile, "w")  # should be in try

	j = 0
	while j < 10:
		ofile.write(str(j) + ', ' + str(randint(10, 10000)) + "\n")
		j = j + 2
	
	ofile.close()
	
	return

main()
