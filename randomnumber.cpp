import random

def guess_the_number():
    # Generate a random number between 1 and 100
    number_to_guess = random.randint(1, 100)
    guess = None

    print("Welcome to the Number Guessing Game!")
    print("I have picked a number between 1 and 100.")
    print("Try to guess it!")

    # Loop until the user guesses the correct number
    while guess != number_to_guess:
        # Get the user's guess
        guess = int(input("Enter your guess: "))

        # Provide feedback on the guess
        if guess < number_to_guess:
            print("Too low! Try again.")
        elif guess > number_to_guess:
            print("Too high! Try again.")
        else:
            print("Congratulations! You guessed the correct number.")

if __name__ == "__main__":
    guess_the_number()
