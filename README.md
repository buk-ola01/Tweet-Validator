# Tweet Validator

This is a C program that validates tweets. The program ensures that tweets meet certain criteria, and outputs either "Valid tweet" or "Invalid tweet" depending on the results.

## Requirements

The Program has the following requirements.

- Tweets must have `280` characters or less.
- Tweets must not contain any `invalid character`.
- Tweets must not contain any `"@"` mentions.
- Tweets must not contains any `URL's` or `email address`.

## Usage

To use the program, simply compile it and run it on your terminal. The program prompts you to input the tweet you want to validate.

```ts
$ gcc tweet_validator.c -o tweet_validator
$ ./tweet_validator
Enter tweet: What is on your mind?
```

If the tweet meets all the requirements, the program outputs `"Valid tweet."` Otherwise, it outputs `"Invalid tweet."`

## Examples

Here are some examples of how the program works:

- Valid tweet:

```c
$ ./tweet_validator
Enter tweet: This is a valid tweet that meet all requirements.
Valid Tweet.
```

- Invalid tweet with `"@"` mention:

```c
$ ./tweet_validator
Enter tweet: This tweet contains an @mention which is not allowed.
Invalid tweet.
```

- Invalid tweet with `URL`:

```c
$ ./tweet_validator
Enter tweet: This tweet contains a URL (https://invalidtweet.com) which is not allowed.
Invalid tweet.
```

- Invalid tweet with `email address`:

```c
$ ./tweet_validator
Enter Tweet: This tweet contain an email address (invalidtweet@gmail.com)
Invalid tweet.
```

## Conclusion

In conclusion, the Tweet Validator program is a C program that validates tweets based on certain criteria, including `character limit`, `invalid characters`, and the presence of `"@"` mentions, `URLs` or `email addresses`. The program provides an easy-to-use interface that prompts users to input their tweets, and outputs either `"Valid tweet"` or `"Invalid tweet"` depending on the results. The examples provided in this README file demonstrate how the program works in different scenarios. By using this program, users can ensure that their tweets meet the necessary criteria before posting them on social media platforms.

