class point:
    A = 5
    B = 4
    C = 3
    D = 2
    E = 1
    F = 0
class credit_hour:
    pf = 3
    pf_lab = 1
    pst = 2
    iict = 2
    iict_lab = 1
    ecc = 3
    qt = 0.5
def marks_to_grade(x):
    if (x <= 100)and(x > 80):
        grad = "A"
    elif (x <= 80)and(x > 70):
        grad = "B"
    elif (x <= 70)and(x > 60):
        grad = "C"
    elif (x <= 60)and(x > 50):
        grad = "D"
    elif (x <= 50)and(x > 45):
        grad = "E"
    elif (x <= 45)and(x > 0):
        grad = "F"
    else:
        print("wrong input")
    return grad
def grade_to_point(grad):
    if grad == "A":
        p = point.A
    elif grad == "B":
        p = point.B
    elif grad == "C":
        p = point.C
    elif grad == "D":
        p = point.D
    elif grad == "E":
        p = point.E
    elif grad == "F":
        p = point.F
    else:
        print("wrong input")
    return p
def pointGrade_x_credHour(subject,p):
    if subject == "pf":
        point = (credit_hour.pf)*(p)
    elif subject == "pf lab":
        point = (credit_hour.pf_lab)*(p)
    elif subject == "pst":
        point = (credit_hour.pst)*(p)
    elif subject == "iict":
        point = (credit_hour.iict)*(p)
    elif subject == "iict lab":
        point = (credit_hour.iict_lab)*(p)
    elif subject == "ecc":
        point = (credit_hour.ecc)*(p)
    elif subject == "qt":
        point = (credit_hour.qt)*(p)
    else:
        print("wrong input")
    return point
def GPA(pf,pfl,pst,iict,iictl,ecc,qt):
    tot_ch = (credit_hour.pf)+(credit_hour.pf_lab)+(credit_hour.pst)+(credit_hour.iict)+(credit_hour.iict_lab)+(credit_hour.ecc)+(credit_hour.qt)
    sum_pt = (pf+pfl+pst+iict+iictl+ecc+qt)
    gpa = (sum_pt)/(tot_ch)
    return gpa
def main():
    print("for programming fundamentals")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    pf = pointGrade_x_credHour("pf",pt)
    print("for programming fundamentals lab")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    pfl = pointGrade_x_credHour("pf lab",pt)
    print("for pakistan studies")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    pst = pointGrade_x_credHour("pst",pt)
    print("for iict")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    iict = pointGrade_x_credHour("iict",pt)
    print("for iict lab")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    iictl = pointGrade_x_credHour("iict lab",pt)
    print("for english composition and comprehension")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    ecc = pointGrade_x_credHour("ecc",pt)
    print("for quran translation")
    x = int(input("enter marks from 100"))
    g = marks_to_grade(x)
    print("the grade is ", g)
    pt = grade_to_point(g)
    qt = pointGrade_x_credHour("qt",pt)
    gp = round(GPA(pf,pfl,pst,iict,iictl,ecc,qt),3)
    print("your gpa is ",gp)
main()








