def main():
	infile = input("Enter input file name: ")
	outfile = input("Enter output file name: ")

	ifile = open(infile)
	ofile = open(outfile, "w")
	c = ifile.read(1)
	while(c != ""):
		if c >= 'a' and c <= 'z':
			c = chr(ord(c)-ord('a')+ord('A'))
		ofile.write(c)
		c = ifile.read(1)
	
	ifile.close()
	ofile.close()
	
	return 
   
main()