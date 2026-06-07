# Program to remove words at odd position in a string

text = input("Enter a string: ")

words = text.split()

result = [words[i] for i in range(len(words)) if i % 2 != 0]

output = " ".join(result)

print("Updated String:", output)