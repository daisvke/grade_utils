#!/usr/bin/python3.6

lst = []

while 1: 
	try:
		grade = float(input("Please enter a grade: "))
	except KeyboardInterrupt:
		print("\n\nGrade entry interrupted. Exiting...")
		break
	
	if grade < 0:
		print("Invalid grade!")

	if grade >= 0:
		lst.append(grade)
		print('\n')
		print("You have {} grade(s)".format(len(lst)))
		print("The best grade is: {}".format(max(lst)))
		print("The worst grade is: {}".format(min(lst)))
		print("The average grade is: {}".format(sum(lst)/len(lst)))
		print('\n')
