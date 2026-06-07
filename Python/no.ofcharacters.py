# Program to count the number of characters in a string

text = input("Enter a string: ")

count = len(text.replace(" ", ""))

print("Number of characters:", count)