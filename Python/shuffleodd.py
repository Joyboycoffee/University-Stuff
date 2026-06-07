# Program to shuffle the odd numbered words with even words in a string

text = input("Enter a string: ")

words = text.split()

for i in range(0, len(words) - 1, 2):
    words[i], words[i + 1] = words[i + 1], words[i]

result = " ".join(words)

print("Shuffled String:", result)