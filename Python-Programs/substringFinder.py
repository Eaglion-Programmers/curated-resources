#Finds a particular sub-string that user wants find from a large sentence or string.


comment=input("Enter a comment: ")
usr_find=input("Enter the word you want to find:")

comment_lower=comment.lower()


if(usr_find in comment_lower):
    print("This comment contains", usr_find)
else:
    print("This comment doesn't contains your word")
