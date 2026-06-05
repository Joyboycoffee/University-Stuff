print ("{Gourav}, Date: {01-05-2026")
def count_chars_words(text):
    char_count = 0
    word_count = 0
    in_word = False

    for ch in text:
        if ch != " ":
            char_count += 1

        if ch != " " and not in_word:
            word_count += 1
            in_word = True
        elif ch == " ":
            in_word = False

    return char_count, word_count


user_input = input("Enter a sentence: ")

chars, words = count_chars_words(user_input)

print("Number of characters (excluding spaces):", chars)
print("Number of words:", words)