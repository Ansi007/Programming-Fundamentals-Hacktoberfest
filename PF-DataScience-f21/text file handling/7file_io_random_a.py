from os import system
from os import SEEK_SET, SEEK_CUR, SEEK_END

def main():

	# before execution copy data 
	# from numbers2bkup.txt to numbers2.txt
	system("copy numbers2bkup.txt numbers2.txt > nul")
	
	numfile = "numbers2.txt"
	ofile = open(numfile, "a+")
	ofile.write("This message at end of the file\n")
	
	
	#ofile.seek(100, SEEK_SET)
	ofile.seek(100)
	ofile.write("This message at 100 byte start\n")

	#ofile.seek(20, SEEK_CUR)
	ofile.seek(ofile.tell()+20)
	ofile.write("This message at 20 bytes ahead\n")

	#ofile.seek(-30, SEEK_END)
	ofile.seek(0, SEEK_END)
	ofile.seek(ofile.tell()-30)
	ofile.write("This message at 30 from end\n")

	ofile.seek(20)
	n = ofile.readline()
	print(n)

	ofile.close()

	return
	
main()
