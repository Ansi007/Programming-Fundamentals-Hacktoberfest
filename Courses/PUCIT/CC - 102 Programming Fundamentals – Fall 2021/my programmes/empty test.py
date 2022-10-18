def qroot(a, b, c):
	disc = (b**2)-(4*a*c)
	sq_of_disc = disc ** (1 / 2)
	x1 = (-b + sq_of_disc) / (2*a)
	return x1
print(qroot(2 ,4, 1))

