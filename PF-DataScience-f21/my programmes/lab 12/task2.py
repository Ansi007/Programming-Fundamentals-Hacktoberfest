from req_function import * #importing all the required functions from another file(maded specially for this task)
fl = open("results_data.txt","r")
res = open("results_report.txt","w")
strn = "  Subject  Sessional   Midterm   Final   Total   Grade \n"
#using two lines to read from required line
fl.readline()
fl.readline()
#using the specific size of the file only
for k in range(9):
    sub0 = "ITC"
    sub1 = "PF"
    sub2 = "DLD"
    c1 = fl.readline()
    nm = returnName(str(c1))
    b = str(k) + ". " + str(nm) + "\n"
    res.write(b)
    res.write(strn)
    n1,n2,n3 = slicing(str(c1))
    tot = (n1)+(n2)+(n3)
    s = "   "+sub0+"        "+str(n1)+"         "+str(n2)+"      "+str(n3)+"      "+str(tot)+"       "+str(grad(tot))+"\n"
    res.write(s)
    #================================================
    c2 = fl.readline()
    n1,n2,n3 = slicing(str(c2))
    tot = (n1)+(n2)+(n3)
    s = "   "+sub1+"         "+str(n1)+"         "+str(n2)+"      "+str(n3)+"      "+str(tot)+"       "+str(grad(tot))+"\n"
    res.write(s)
    #================================================
    c3 = fl.readline()
    n1,n2,n3 = slicing(str(c3))
    tot = (n1)+(n2)+(n3)
    s = "   "+sub2+"        "+str(n1)+"         "+str(n2)+"      "+str(n3)+"      "+str(tot)+"       "+str(grad(tot))+"\n"
    res.write(s)
fl.close()
res.close()



