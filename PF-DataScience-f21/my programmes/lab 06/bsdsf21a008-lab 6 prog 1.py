# using the data of xyz company as example
class employee:
    ahmed = "CEO"
    ali = "Director"
    ubaid = "Manager"
    shafqat = "Clerk"
    sufia = "Salesman"
    saba = "Receptionist"
    arif = "Driver"
    shauqat = "Peon"
# function to print the objects of the class enumerator
def designation(x):
    if x == "ahmed":
        g = employee.ahmed
        print("you are the", g , "of company")
    elif x == "ali":
        g = employee.ali
        print("you are the", g , "of company")
    elif x == "ubaid":
        g = employee.ubaid
        print("you are the", g , "of company")
    elif x == "shafqat":
        g = employee.shafqat
        print("you are the", g , "of company")
    elif x == "sufia":
        g = employee.sufia
        print("you are the", g , "of company")
    elif x == "saba":
        g = employee.saba
        print("you are the", g , "of company")
    elif x == "arif":
        g = employee.arif
        print("you are the", g , "of company")
    elif x == "shauqat":
        g = employee.shauqat
        print("you are the", g , "of company")
    else:
        print("you do not belong to company employees")
    return None
# using the function as well as the class
def main():
    a = input("enter your name to check for designation in organization = ")
    designation(a)
    return None
main()





